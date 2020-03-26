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
#include "model/AnalyzeNvcRequest.h"
#include "model/AnalyzeNvcResult.h"
#include "model/AuthenticateSigRequest.h"
#include "model/AuthenticateSigResult.h"
#include "model/ConfigurationStyleRequest.h"
#include "model/ConfigurationStyleResult.h"
#include "model/CreateConfigurationRequest.h"
#include "model/CreateConfigurationResult.h"
#include "model/DescribeAfsConfigNameRequest.h"
#include "model/DescribeAfsConfigNameResult.h"
#include "model/DescribeAfsOneConfDataRequest.h"
#include "model/DescribeAfsOneConfDataResult.h"
#include "model/DescribeAfsTotalConfDataRequest.h"
#include "model/DescribeAfsTotalConfDataResult.h"
#include "model/DescribeAfsVerifySigDataRequest.h"
#include "model/DescribeAfsVerifySigDataResult.h"
#include "model/DescribeCaptchaDayRequest.h"
#include "model/DescribeCaptchaDayResult.h"
#include "model/DescribeCaptchaIpCityRequest.h"
#include "model/DescribeCaptchaIpCityResult.h"
#include "model/DescribeCaptchaMinRequest.h"
#include "model/DescribeCaptchaMinResult.h"
#include "model/DescribeCaptchaOrderRequest.h"
#include "model/DescribeCaptchaOrderResult.h"
#include "model/DescribeCaptchaRiskRequest.h"
#include "model/DescribeCaptchaRiskResult.h"
#include "model/DescribeConfigNameRequest.h"
#include "model/DescribeConfigNameResult.h"
#include "model/DescribeEarlyWarningRequest.h"
#include "model/DescribeEarlyWarningResult.h"
#include "model/DescribeOrderInfoRequest.h"
#include "model/DescribeOrderInfoResult.h"
#include "model/DescribePersonMachineListRequest.h"
#include "model/DescribePersonMachineListResult.h"
#include "model/SetEarlyWarningRequest.h"
#include "model/SetEarlyWarningResult.h"
#include "model/UpdateConfigNameRequest.h"
#include "model/UpdateConfigNameResult.h"


namespace AlibabaCloud
{
	namespace Afs
	{
		class ALIBABACLOUD_AFS_EXPORT AfsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AnalyzeNvcResult> AnalyzeNvcOutcome;
			typedef std::future<AnalyzeNvcOutcome> AnalyzeNvcOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::AnalyzeNvcRequest&, const AnalyzeNvcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AnalyzeNvcAsyncHandler;
			typedef Outcome<Error, Model::AuthenticateSigResult> AuthenticateSigOutcome;
			typedef std::future<AuthenticateSigOutcome> AuthenticateSigOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::AuthenticateSigRequest&, const AuthenticateSigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthenticateSigAsyncHandler;
			typedef Outcome<Error, Model::ConfigurationStyleResult> ConfigurationStyleOutcome;
			typedef std::future<ConfigurationStyleOutcome> ConfigurationStyleOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::ConfigurationStyleRequest&, const ConfigurationStyleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigurationStyleAsyncHandler;
			typedef Outcome<Error, Model::CreateConfigurationResult> CreateConfigurationOutcome;
			typedef std::future<CreateConfigurationOutcome> CreateConfigurationOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::CreateConfigurationRequest&, const CreateConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeAfsConfigNameResult> DescribeAfsConfigNameOutcome;
			typedef std::future<DescribeAfsConfigNameOutcome> DescribeAfsConfigNameOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::DescribeAfsConfigNameRequest&, const DescribeAfsConfigNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAfsConfigNameAsyncHandler;
			typedef Outcome<Error, Model::DescribeAfsOneConfDataResult> DescribeAfsOneConfDataOutcome;
			typedef std::future<DescribeAfsOneConfDataOutcome> DescribeAfsOneConfDataOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::DescribeAfsOneConfDataRequest&, const DescribeAfsOneConfDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAfsOneConfDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeAfsTotalConfDataResult> DescribeAfsTotalConfDataOutcome;
			typedef std::future<DescribeAfsTotalConfDataOutcome> DescribeAfsTotalConfDataOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::DescribeAfsTotalConfDataRequest&, const DescribeAfsTotalConfDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAfsTotalConfDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeAfsVerifySigDataResult> DescribeAfsVerifySigDataOutcome;
			typedef std::future<DescribeAfsVerifySigDataOutcome> DescribeAfsVerifySigDataOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::DescribeAfsVerifySigDataRequest&, const DescribeAfsVerifySigDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAfsVerifySigDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeCaptchaDayResult> DescribeCaptchaDayOutcome;
			typedef std::future<DescribeCaptchaDayOutcome> DescribeCaptchaDayOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::DescribeCaptchaDayRequest&, const DescribeCaptchaDayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaDayAsyncHandler;
			typedef Outcome<Error, Model::DescribeCaptchaIpCityResult> DescribeCaptchaIpCityOutcome;
			typedef std::future<DescribeCaptchaIpCityOutcome> DescribeCaptchaIpCityOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::DescribeCaptchaIpCityRequest&, const DescribeCaptchaIpCityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaIpCityAsyncHandler;
			typedef Outcome<Error, Model::DescribeCaptchaMinResult> DescribeCaptchaMinOutcome;
			typedef std::future<DescribeCaptchaMinOutcome> DescribeCaptchaMinOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::DescribeCaptchaMinRequest&, const DescribeCaptchaMinOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaMinAsyncHandler;
			typedef Outcome<Error, Model::DescribeCaptchaOrderResult> DescribeCaptchaOrderOutcome;
			typedef std::future<DescribeCaptchaOrderOutcome> DescribeCaptchaOrderOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::DescribeCaptchaOrderRequest&, const DescribeCaptchaOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaOrderAsyncHandler;
			typedef Outcome<Error, Model::DescribeCaptchaRiskResult> DescribeCaptchaRiskOutcome;
			typedef std::future<DescribeCaptchaRiskOutcome> DescribeCaptchaRiskOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::DescribeCaptchaRiskRequest&, const DescribeCaptchaRiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaRiskAsyncHandler;
			typedef Outcome<Error, Model::DescribeConfigNameResult> DescribeConfigNameOutcome;
			typedef std::future<DescribeConfigNameOutcome> DescribeConfigNameOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::DescribeConfigNameRequest&, const DescribeConfigNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigNameAsyncHandler;
			typedef Outcome<Error, Model::DescribeEarlyWarningResult> DescribeEarlyWarningOutcome;
			typedef std::future<DescribeEarlyWarningOutcome> DescribeEarlyWarningOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::DescribeEarlyWarningRequest&, const DescribeEarlyWarningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEarlyWarningAsyncHandler;
			typedef Outcome<Error, Model::DescribeOrderInfoResult> DescribeOrderInfoOutcome;
			typedef std::future<DescribeOrderInfoOutcome> DescribeOrderInfoOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::DescribeOrderInfoRequest&, const DescribeOrderInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrderInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribePersonMachineListResult> DescribePersonMachineListOutcome;
			typedef std::future<DescribePersonMachineListOutcome> DescribePersonMachineListOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::DescribePersonMachineListRequest&, const DescribePersonMachineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonMachineListAsyncHandler;
			typedef Outcome<Error, Model::SetEarlyWarningResult> SetEarlyWarningOutcome;
			typedef std::future<SetEarlyWarningOutcome> SetEarlyWarningOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::SetEarlyWarningRequest&, const SetEarlyWarningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetEarlyWarningAsyncHandler;
			typedef Outcome<Error, Model::UpdateConfigNameResult> UpdateConfigNameOutcome;
			typedef std::future<UpdateConfigNameOutcome> UpdateConfigNameOutcomeCallable;
			typedef std::function<void(const AfsClient*, const Model::UpdateConfigNameRequest&, const UpdateConfigNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConfigNameAsyncHandler;

			AfsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AfsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AfsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AfsClient();
			AnalyzeNvcOutcome analyzeNvc(const Model::AnalyzeNvcRequest &request)const;
			void analyzeNvcAsync(const Model::AnalyzeNvcRequest& request, const AnalyzeNvcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AnalyzeNvcOutcomeCallable analyzeNvcCallable(const Model::AnalyzeNvcRequest& request) const;
			AuthenticateSigOutcome authenticateSig(const Model::AuthenticateSigRequest &request)const;
			void authenticateSigAsync(const Model::AuthenticateSigRequest& request, const AuthenticateSigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthenticateSigOutcomeCallable authenticateSigCallable(const Model::AuthenticateSigRequest& request) const;
			ConfigurationStyleOutcome configurationStyle(const Model::ConfigurationStyleRequest &request)const;
			void configurationStyleAsync(const Model::ConfigurationStyleRequest& request, const ConfigurationStyleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigurationStyleOutcomeCallable configurationStyleCallable(const Model::ConfigurationStyleRequest& request) const;
			CreateConfigurationOutcome createConfiguration(const Model::CreateConfigurationRequest &request)const;
			void createConfigurationAsync(const Model::CreateConfigurationRequest& request, const CreateConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConfigurationOutcomeCallable createConfigurationCallable(const Model::CreateConfigurationRequest& request) const;
			DescribeAfsConfigNameOutcome describeAfsConfigName(const Model::DescribeAfsConfigNameRequest &request)const;
			void describeAfsConfigNameAsync(const Model::DescribeAfsConfigNameRequest& request, const DescribeAfsConfigNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAfsConfigNameOutcomeCallable describeAfsConfigNameCallable(const Model::DescribeAfsConfigNameRequest& request) const;
			DescribeAfsOneConfDataOutcome describeAfsOneConfData(const Model::DescribeAfsOneConfDataRequest &request)const;
			void describeAfsOneConfDataAsync(const Model::DescribeAfsOneConfDataRequest& request, const DescribeAfsOneConfDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAfsOneConfDataOutcomeCallable describeAfsOneConfDataCallable(const Model::DescribeAfsOneConfDataRequest& request) const;
			DescribeAfsTotalConfDataOutcome describeAfsTotalConfData(const Model::DescribeAfsTotalConfDataRequest &request)const;
			void describeAfsTotalConfDataAsync(const Model::DescribeAfsTotalConfDataRequest& request, const DescribeAfsTotalConfDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAfsTotalConfDataOutcomeCallable describeAfsTotalConfDataCallable(const Model::DescribeAfsTotalConfDataRequest& request) const;
			DescribeAfsVerifySigDataOutcome describeAfsVerifySigData(const Model::DescribeAfsVerifySigDataRequest &request)const;
			void describeAfsVerifySigDataAsync(const Model::DescribeAfsVerifySigDataRequest& request, const DescribeAfsVerifySigDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAfsVerifySigDataOutcomeCallable describeAfsVerifySigDataCallable(const Model::DescribeAfsVerifySigDataRequest& request) const;
			DescribeCaptchaDayOutcome describeCaptchaDay(const Model::DescribeCaptchaDayRequest &request)const;
			void describeCaptchaDayAsync(const Model::DescribeCaptchaDayRequest& request, const DescribeCaptchaDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCaptchaDayOutcomeCallable describeCaptchaDayCallable(const Model::DescribeCaptchaDayRequest& request) const;
			DescribeCaptchaIpCityOutcome describeCaptchaIpCity(const Model::DescribeCaptchaIpCityRequest &request)const;
			void describeCaptchaIpCityAsync(const Model::DescribeCaptchaIpCityRequest& request, const DescribeCaptchaIpCityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCaptchaIpCityOutcomeCallable describeCaptchaIpCityCallable(const Model::DescribeCaptchaIpCityRequest& request) const;
			DescribeCaptchaMinOutcome describeCaptchaMin(const Model::DescribeCaptchaMinRequest &request)const;
			void describeCaptchaMinAsync(const Model::DescribeCaptchaMinRequest& request, const DescribeCaptchaMinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCaptchaMinOutcomeCallable describeCaptchaMinCallable(const Model::DescribeCaptchaMinRequest& request) const;
			DescribeCaptchaOrderOutcome describeCaptchaOrder(const Model::DescribeCaptchaOrderRequest &request)const;
			void describeCaptchaOrderAsync(const Model::DescribeCaptchaOrderRequest& request, const DescribeCaptchaOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCaptchaOrderOutcomeCallable describeCaptchaOrderCallable(const Model::DescribeCaptchaOrderRequest& request) const;
			DescribeCaptchaRiskOutcome describeCaptchaRisk(const Model::DescribeCaptchaRiskRequest &request)const;
			void describeCaptchaRiskAsync(const Model::DescribeCaptchaRiskRequest& request, const DescribeCaptchaRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCaptchaRiskOutcomeCallable describeCaptchaRiskCallable(const Model::DescribeCaptchaRiskRequest& request) const;
			DescribeConfigNameOutcome describeConfigName(const Model::DescribeConfigNameRequest &request)const;
			void describeConfigNameAsync(const Model::DescribeConfigNameRequest& request, const DescribeConfigNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConfigNameOutcomeCallable describeConfigNameCallable(const Model::DescribeConfigNameRequest& request) const;
			DescribeEarlyWarningOutcome describeEarlyWarning(const Model::DescribeEarlyWarningRequest &request)const;
			void describeEarlyWarningAsync(const Model::DescribeEarlyWarningRequest& request, const DescribeEarlyWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEarlyWarningOutcomeCallable describeEarlyWarningCallable(const Model::DescribeEarlyWarningRequest& request) const;
			DescribeOrderInfoOutcome describeOrderInfo(const Model::DescribeOrderInfoRequest &request)const;
			void describeOrderInfoAsync(const Model::DescribeOrderInfoRequest& request, const DescribeOrderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOrderInfoOutcomeCallable describeOrderInfoCallable(const Model::DescribeOrderInfoRequest& request) const;
			DescribePersonMachineListOutcome describePersonMachineList(const Model::DescribePersonMachineListRequest &request)const;
			void describePersonMachineListAsync(const Model::DescribePersonMachineListRequest& request, const DescribePersonMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePersonMachineListOutcomeCallable describePersonMachineListCallable(const Model::DescribePersonMachineListRequest& request) const;
			SetEarlyWarningOutcome setEarlyWarning(const Model::SetEarlyWarningRequest &request)const;
			void setEarlyWarningAsync(const Model::SetEarlyWarningRequest& request, const SetEarlyWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetEarlyWarningOutcomeCallable setEarlyWarningCallable(const Model::SetEarlyWarningRequest& request) const;
			UpdateConfigNameOutcome updateConfigName(const Model::UpdateConfigNameRequest &request)const;
			void updateConfigNameAsync(const Model::UpdateConfigNameRequest& request, const UpdateConfigNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConfigNameOutcomeCallable updateConfigNameCallable(const Model::UpdateConfigNameRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_AFS_AFSCLIENT_H_
