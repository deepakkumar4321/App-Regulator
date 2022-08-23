#pragma once

#include "appRegulator.h"

namespace WPEFramework {

    namespace Plugin {
        class AppRegulator : public PluginHost::IPlugin, public PluginHost::JSONRPC {
        public:
            AppRegulator();
            virtual ~AppRegulator();
            AppRegulator(const AppRegulator&) = delete;
            AppRegulator& operator=(const AppRegulator&) = delete;

            virtual uint32_t getTime(const JsonObject& parameters, JsonObject& response);

            virtual void timeCheck();

            BEGIN_INTERFACE_MAP(AppRegulator)
            INTERFACE_ENTRY(PluginHost::IPlugin)
            INTERFACE_ENTRY(PluginHost::IDispatcher)
            END_INTERFACE_MAP

            virtual const string Initialize(PluginHost::IShell* service) override;
            virtual void Deinitialize(PluginHost::IShell* service) override;
            virtual string Information() const override;

            uint32_t getApiVersionNumber() const {return apiVersionNumber;};
            void setApiVersionNumber(uint32_t apiVersion) {apiVersionNumber = apiVersion;};

            
            static AppRegulator& getInstance();

        private:
            uint32_t apiVersionNumber;
            static AppRegulator* instance;


            // Variables yet to be decided
            // Variables yet to be decided
            // Variables yet to be decided 
        };
    } 
}
