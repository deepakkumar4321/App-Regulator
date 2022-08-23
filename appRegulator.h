#pragma once

#include "appRegulator.h"

namespace WPEFramework {

    namespace Plugin {
        class AppRegulator : public PluginHost::IPlugin, public PluginHost::JSONRPC {
        public:
            AppRegulator();
            virtual ~CamMotionMonitor();
            AppRegulator(const AppRegulator&) = delete;
            AppRegulator& operator=(const AppRegulator&) = delete;

            virtual uint32_t sendPath(const JsonObject& parameters, JsonObject& response);

            virtual void onMotionCaptured();

            BEGIN_INTERFACE_MAP(CamMotionMonitor)
            INTERFACE_ENTRY(PluginHost::IPlugin)
            INTERFACE_ENTRY(PluginHost::IDispatcher)
            END_INTERFACE_MAP

            virtual const string Initialize(PluginHost::IShell* service) override;
            virtual void Deinitialize(PluginHost::IShell* service) override;
            virtual string Information() const override;

            uint32_t getApiVersionNumber() const {return apiVersionNumber;};
            void setApiVersionNumber(uint32_t apiVersion) {apiVersionNumber = apiVersion;};

            
            static CamMotionMonitor& getInstance();

        private:
            uint32_t apiVersionNumber;
            static CamMotionMonitor* instance;


            std::string m_ipAddress;
            std::string m_imagePath;
            std::string m_fileName;
        };
    } 
}
