/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_AFS_AFSCLIENT_H_
#define ALIBABACLOUD_AFS_AFSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AfsExport.h"
#include "model/DescribeEarlyWarningRequest.h"
#include "model/DescribeEarlyWarningResult.h"
#include "model/SetEarlyWarningRequest.h"
#include "model/SetEarlyWarningResult.h"
#include "model/DescribeCaptchaIpCityRequest.h"
#include "model/DescribeCaptchaIpCityResult.h"
#include "model/ConfigurationStyleRequest.h"
#include "model/ConfigurationStyleResult.h"
#include "model/DescribeCaptchaMinRequest.h"
#include "model/DescribeCaptchaMinResult.h"
#include "model/DescribeCaptchaRiskRequest.h"
#include "model/DescribeCaptchaRiskResult.h"
#include "model/AuthenticateSigRequest.h"
#include "model/AuthenticateSigResult.h"
#include "model/DescribeConfigNameRequest.h"
#include "model/DescribeConfigNameResult.h"
#include "model/DescribeCaptchaDayRequest.h"
#include "model/DescribeCaptchaDayResult.h"
#include "model/DescribePersonMachineListRequest.h"
#include "model/DescribePersonMachineListResult.h"
#include "model/CreateConfigurationRequest.h"
#include "model/CreateConfigurationResult.h"
#include "model/AnalyzeNvcRequest.h"
#include "model/AnalyzeNvcResult.h"


namespace AlibabaCloud
{
	namespace Afs
	{
		class ALIBABACLOUD_AFS_EXPORT AfsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeEarlyWarningResult> DescribeEarlyWarningOutcome;			
			typedef std::future<DescribeEarlyWarningOutcome> DescribeEarlyWarningOutcomeCallable;			
			typedef std::function<void(const AfsClient*, const Model::DescribeEarlyWarningRequest&, const DescribeEarlyWarningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEarlyWarningAsyncHandler;
			typedef Outcome<Error, Model::SetEarlyWarningResult> SetEarlyWarningOutcome;			
			typedef std::future<SetEarlyWarningOutcome> SetEarlyWarningOutcomeCallable;			
			typedef std::function<void(const AfsClient*, const Model::SetEarlyWarningRequest&, const SetEarlyWarningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetEarlyWarningAsyncHandler;
			typedef Outcome<Error, Model::DescribeCaptchaIpCityResult> DescribeCaptchaIpCityOutcome;			
			typedef std::future<DescribeCaptchaIpCityOutcome> DescribeCaptchaIpCityOutcomeCallable;			
			typedef std::function<void(const AfsClient*, const Model::DescribeCaptchaIpCityRequest&, const DescribeCaptchaIpCityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaIpCityAsyncHandler;
			typedef Outcome<Error, Model::ConfigurationStyleResult> ConfigurationStyleOutcome;			
			typedef std::future<ConfigurationStyleOutcome> ConfigurationStyleOutcomeCallable;			
			typedef std::function<void(const AfsClient*, const Model::ConfigurationStyleRequest&, const ConfigurationStyleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigurationStyleAsyncHandler;
			typedef Outcome<Error, Model::DescribeCaptchaMinResult> DescribeCaptchaMinOutcome;			
			typedef std::future<DescribeCaptchaMinOutcome> DescribeCaptchaMinOutcomeCallable;			
			typedef std::function<void(const AfsClient*, const Model::DescribeCaptchaMinRequest&, const DescribeCaptchaMinOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaMinAsyncHandler;
			typedef Outcome<Error, Model::DescribeCaptchaRiskResult> DescribeCaptchaRiskOutcome;			
			typedef std::future<DescribeCaptchaRiskOutcome> DescribeCaptchaRiskOutcomeCallable;			
			typedef std::function<void(const AfsClient*, const Model::DescribeCaptchaRiskRequest&, const DescribeCaptchaRiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaRiskAsyncHandler;
			typedef Outcome<Error, Model::AuthenticateSigResult> AuthenticateSigOutcome;			
			typedef std::future<AuthenticateSigOutcome> AuthenticateSigOutcomeCallable;			
			typedef std::function<void(const AfsClient*, const Model::AuthenticateSigRequest&, const AuthenticateSigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthenticateSigAsyncHandler;
			typedef Outcome<Error, Model::DescribeConfigNameResult> DescribeConfigNameOutcome;			
			typedef std::future<DescribeConfigNameOutcome> DescribeConfigNameOutcomeCallable;			
			typedef std::function<void(const AfsClient*, const Model::DescribeConfigNameRequest&, const DescribeConfigNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigNameAsyncHandler;
			typedef Outcome<Error, Model::DescribeCaptchaDayResult> DescribeCaptchaDayOutcome;			
			typedef std::future<DescribeCaptchaDayOutcome> DescribeCaptchaDayOutcomeCallable;			
			typedef std::function<void(const AfsClient*, const Model::DescribeCaptchaDayRequest&, const DescribeCaptchaDayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaDayAsyncHandler;
			typedef Outcome<Error, Model::DescribePersonMachineListResult> DescribePersonMachineListOutcome;			
			typedef std::future<DescribePersonMachineListOutcome> DescribePersonMachineListOutcomeCallable;			
			typedef std::function<void(const AfsClient*, const Model::DescribePersonMachineListRequest&, const DescribePersonMachineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonMachineListAsyncHandler;
			typedef Outcome<Error, Model::CreateConfigurationResult> CreateConfigurationOutcome;			
			typedef std::future<CreateConfigurationOutcome> CreateConfigurationOutcomeCallable;			
			typedef std::function<void(const AfsClient*, const Model::CreateConfigurationRequest&, const CreateConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigurationAsyncHandler;
			typedef Outcome<Error, Model::AnalyzeNvcResult> AnalyzeNvcOutcome;			
			typedef std::future<AnalyzeNvcOutcome> AnalyzeNvcOutcomeCallable;			
			typedef std::function<void(const AfsClient*, const Model::AnalyzeNvcRequest&, const AnalyzeNvcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AnalyzeNvcAsyncHandler;

			AfsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AfsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AfsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AfsClient();
            DescribeEarlyWarningOutcome describeEarlyWarning(const Model::DescribeEarlyWarningRequest &request)const;
            void describeEarlyWarningAsync(const Model::DescribeEarlyWarningRequest& request, const DescribeEarlyWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeEarlyWarningOutcomeCallable describeEarlyWarningCallable(const Model::DescribeEarlyWarningRequest& request) const;
            SetEarlyWarningOutcome setEarlyWarning(const Model::SetEarlyWarningRequest &request)const;
            void setEarlyWarningAsync(const Model::SetEarlyWarningRequest& request, const SetEarlyWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetEarlyWarningOutcomeCallable setEarlyWarningCallable(const Model::SetEarlyWarningRequest& request) const;
            DescribeCaptchaIpCityOutcome describeCaptchaIpCity(const Model::DescribeCaptchaIpCityRequest &request)const;
            void describeCaptchaIpCityAsync(const Model::DescribeCaptchaIpCityRequest& request, const DescribeCaptchaIpCityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCaptchaIpCityOutcomeCallable describeCaptchaIpCityCallable(const Model::DescribeCaptchaIpCityRequest& request) const;
            ConfigurationStyleOutcome configurationStyle(const Model::ConfigurationStyleRequest &request)const;
            void configurationStyleAsync(const Model::ConfigurationStyleRequest& request, const ConfigurationStyleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ConfigurationStyleOutcomeCallable configurationStyleCallable(const Model::ConfigurationStyleRequest& request) const;
            DescribeCaptchaMinOutcome describeCaptchaMin(const Model::DescribeCaptchaMinRequest &request)const;
            void describeCaptchaMinAsync(const Model::DescribeCaptchaMinRequest& request, const DescribeCaptchaMinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCaptchaMinOutcomeCallable describeCaptchaMinCallable(const Model::DescribeCaptchaMinRequest& request) const;
            DescribeCaptchaRiskOutcome describeCaptchaRisk(const Model::DescribeCaptchaRiskRequest &request)const;
            void describeCaptchaRiskAsync(const Model::DescribeCaptchaRiskRequest& request, const DescribeCaptchaRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCaptchaRiskOutcomeCallable describeCaptchaRiskCallable(const Model::DescribeCaptchaRiskRequest& request) const;
            AuthenticateSigOutcome authenticateSig(const Model::AuthenticateSigRequest &request)const;
            void authenticateSigAsync(const Model::AuthenticateSigRequest& request, const AuthenticateSigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AuthenticateSigOutcomeCallable authenticateSigCallable(const Model::AuthenticateSigRequest& request) const;
            DescribeConfigNameOutcome describeConfigName(const Model::DescribeConfigNameRequest &request)const;
            void describeConfigNameAsync(const Model::DescribeConfigNameRequest& request, const DescribeConfigNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeConfigNameOutcomeCallable describeConfigNameCallable(const Model::DescribeConfigNameRequest& request) const;
            DescribeCaptchaDayOutcome describeCaptchaDay(const Model::DescribeCaptchaDayRequest &request)const;
            void describeCaptchaDayAsync(const Model::DescribeCaptchaDayRequest& request, const DescribeCaptchaDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCaptchaDayOutcomeCallable describeCaptchaDayCallable(const Model::DescribeCaptchaDayRequest& request) const;
            DescribePersonMachineListOutcome describePersonMachineList(const Model::DescribePersonMachineListRequest &request)const;
            void describePersonMachineListAsync(const Model::DescribePersonMachineListRequest& request, const DescribePersonMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribePersonMachineListOutcomeCallable describePersonMachineListCallable(const Model::DescribePersonMachineListRequest& request) const;
            CreateConfigurationOutcome createConfiguration(const Model::CreateConfigurationRequest &request)const;
            void createConfigurationAsync(const Model::CreateConfigurationRequest& request, const CreateConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateConfigurationOutcomeCallable createConfigurationCallable(const Model::CreateConfigurationRequest& request) const;
            AnalyzeNvcOutcome analyzeNvc(const Model::AnalyzeNvcRequest &request)const;
            void analyzeNvcAsync(const Model::AnalyzeNvcRequest& request, const AnalyzeNvcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AnalyzeNvcOutcomeCallable analyzeNvcCallable(const Model::AnalyzeNvcRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_AFS_AFSCLIENT_H_
