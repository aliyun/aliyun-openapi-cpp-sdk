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

#ifndef ALIBABACLOUD_ES_SERVERLESS_ES_SERVERLESSCLIENT_H_
#define ALIBABACLOUD_ES_SERVERLESS_ES_SERVERLESSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "Es_serverlessExport.h"
#include "model/CreateAppRequest.h"
#include "model/CreateAppResult.h"
#include "model/CreateDataStreamRequest.h"
#include "model/CreateDataStreamResult.h"
#include "model/DeleteAccessTokenRequest.h"
#include "model/DeleteAccessTokenResult.h"
#include "model/DeleteAppRequest.h"
#include "model/DeleteAppResult.h"
#include "model/DeleteDataStreamRequest.h"
#include "model/DeleteDataStreamResult.h"
#include "model/DescibeRegionsRequest.h"
#include "model/DescibeRegionsResult.h"
#include "model/DisableAccessTokenRequest.h"
#include "model/DisableAccessTokenResult.h"
#include "model/EnableAccessTokenRequest.h"
#include "model/EnableAccessTokenResult.h"
#include "model/GenerateAcccessTokenRequest.h"
#include "model/GenerateAcccessTokenResult.h"
#include "model/GetAppRequest.h"
#include "model/GetAppResult.h"
#include "model/GetDataStreamRequest.h"
#include "model/GetDataStreamResult.h"
#include "model/GetRegionInfoRequest.h"
#include "model/GetRegionInfoResult.h"
#include "model/ListAccessTokensRequest.h"
#include "model/ListAccessTokensResult.h"
#include "model/ListAppsRequest.h"
#include "model/ListAppsResult.h"
#include "model/ListDataStreamsRequest.h"
#include "model/ListDataStreamsResult.h"
#include "model/UpdateAppRequest.h"
#include "model/UpdateAppResult.h"
#include "model/UpdateDataStreamRequest.h"
#include "model/UpdateDataStreamResult.h"


namespace AlibabaCloud
{
	namespace Es_serverless
	{
		class ALIBABACLOUD_ES_SERVERLESS_EXPORT Es_serverlessClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateAppResult> CreateAppOutcome;
			typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::CreateAppRequest&, const CreateAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
			typedef Outcome<Error, Model::CreateDataStreamResult> CreateDataStreamOutcome;
			typedef std::future<CreateDataStreamOutcome> CreateDataStreamOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::CreateDataStreamRequest&, const CreateDataStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataStreamAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccessTokenResult> DeleteAccessTokenOutcome;
			typedef std::future<DeleteAccessTokenOutcome> DeleteAccessTokenOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::DeleteAccessTokenRequest&, const DeleteAccessTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessTokenAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppResult> DeleteAppOutcome;
			typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::DeleteAppRequest&, const DeleteAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataStreamResult> DeleteDataStreamOutcome;
			typedef std::future<DeleteDataStreamOutcome> DeleteDataStreamOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::DeleteDataStreamRequest&, const DeleteDataStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataStreamAsyncHandler;
			typedef Outcome<Error, Model::DescibeRegionsResult> DescibeRegionsOutcome;
			typedef std::future<DescibeRegionsOutcome> DescibeRegionsOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::DescibeRegionsRequest&, const DescibeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescibeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DisableAccessTokenResult> DisableAccessTokenOutcome;
			typedef std::future<DisableAccessTokenOutcome> DisableAccessTokenOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::DisableAccessTokenRequest&, const DisableAccessTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableAccessTokenAsyncHandler;
			typedef Outcome<Error, Model::EnableAccessTokenResult> EnableAccessTokenOutcome;
			typedef std::future<EnableAccessTokenOutcome> EnableAccessTokenOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::EnableAccessTokenRequest&, const EnableAccessTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableAccessTokenAsyncHandler;
			typedef Outcome<Error, Model::GenerateAcccessTokenResult> GenerateAcccessTokenOutcome;
			typedef std::future<GenerateAcccessTokenOutcome> GenerateAcccessTokenOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::GenerateAcccessTokenRequest&, const GenerateAcccessTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateAcccessTokenAsyncHandler;
			typedef Outcome<Error, Model::GetAppResult> GetAppOutcome;
			typedef std::future<GetAppOutcome> GetAppOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::GetAppRequest&, const GetAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAppAsyncHandler;
			typedef Outcome<Error, Model::GetDataStreamResult> GetDataStreamOutcome;
			typedef std::future<GetDataStreamOutcome> GetDataStreamOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::GetDataStreamRequest&, const GetDataStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataStreamAsyncHandler;
			typedef Outcome<Error, Model::GetRegionInfoResult> GetRegionInfoOutcome;
			typedef std::future<GetRegionInfoOutcome> GetRegionInfoOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::GetRegionInfoRequest&, const GetRegionInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRegionInfoAsyncHandler;
			typedef Outcome<Error, Model::ListAccessTokensResult> ListAccessTokensOutcome;
			typedef std::future<ListAccessTokensOutcome> ListAccessTokensOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::ListAccessTokensRequest&, const ListAccessTokensOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAccessTokensAsyncHandler;
			typedef Outcome<Error, Model::ListAppsResult> ListAppsOutcome;
			typedef std::future<ListAppsOutcome> ListAppsOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::ListAppsRequest&, const ListAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppsAsyncHandler;
			typedef Outcome<Error, Model::ListDataStreamsResult> ListDataStreamsOutcome;
			typedef std::future<ListDataStreamsOutcome> ListDataStreamsOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::ListDataStreamsRequest&, const ListDataStreamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataStreamsAsyncHandler;
			typedef Outcome<Error, Model::UpdateAppResult> UpdateAppOutcome;
			typedef std::future<UpdateAppOutcome> UpdateAppOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::UpdateAppRequest&, const UpdateAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAppAsyncHandler;
			typedef Outcome<Error, Model::UpdateDataStreamResult> UpdateDataStreamOutcome;
			typedef std::future<UpdateDataStreamOutcome> UpdateDataStreamOutcomeCallable;
			typedef std::function<void(const Es_serverlessClient*, const Model::UpdateDataStreamRequest&, const UpdateDataStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataStreamAsyncHandler;

			Es_serverlessClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Es_serverlessClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Es_serverlessClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Es_serverlessClient();
			CreateAppOutcome createApp(const Model::CreateAppRequest &request)const;
			void createAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppOutcomeCallable createAppCallable(const Model::CreateAppRequest& request) const;
			CreateDataStreamOutcome createDataStream(const Model::CreateDataStreamRequest &request)const;
			void createDataStreamAsync(const Model::CreateDataStreamRequest& request, const CreateDataStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataStreamOutcomeCallable createDataStreamCallable(const Model::CreateDataStreamRequest& request) const;
			DeleteAccessTokenOutcome deleteAccessToken(const Model::DeleteAccessTokenRequest &request)const;
			void deleteAccessTokenAsync(const Model::DeleteAccessTokenRequest& request, const DeleteAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccessTokenOutcomeCallable deleteAccessTokenCallable(const Model::DeleteAccessTokenRequest& request) const;
			DeleteAppOutcome deleteApp(const Model::DeleteAppRequest &request)const;
			void deleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppOutcomeCallable deleteAppCallable(const Model::DeleteAppRequest& request) const;
			DeleteDataStreamOutcome deleteDataStream(const Model::DeleteDataStreamRequest &request)const;
			void deleteDataStreamAsync(const Model::DeleteDataStreamRequest& request, const DeleteDataStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataStreamOutcomeCallable deleteDataStreamCallable(const Model::DeleteDataStreamRequest& request) const;
			DescibeRegionsOutcome descibeRegions(const Model::DescibeRegionsRequest &request)const;
			void descibeRegionsAsync(const Model::DescibeRegionsRequest& request, const DescibeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescibeRegionsOutcomeCallable descibeRegionsCallable(const Model::DescibeRegionsRequest& request) const;
			DisableAccessTokenOutcome disableAccessToken(const Model::DisableAccessTokenRequest &request)const;
			void disableAccessTokenAsync(const Model::DisableAccessTokenRequest& request, const DisableAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableAccessTokenOutcomeCallable disableAccessTokenCallable(const Model::DisableAccessTokenRequest& request) const;
			EnableAccessTokenOutcome enableAccessToken(const Model::EnableAccessTokenRequest &request)const;
			void enableAccessTokenAsync(const Model::EnableAccessTokenRequest& request, const EnableAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableAccessTokenOutcomeCallable enableAccessTokenCallable(const Model::EnableAccessTokenRequest& request) const;
			GenerateAcccessTokenOutcome generateAcccessToken(const Model::GenerateAcccessTokenRequest &request)const;
			void generateAcccessTokenAsync(const Model::GenerateAcccessTokenRequest& request, const GenerateAcccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateAcccessTokenOutcomeCallable generateAcccessTokenCallable(const Model::GenerateAcccessTokenRequest& request) const;
			GetAppOutcome getApp(const Model::GetAppRequest &request)const;
			void getAppAsync(const Model::GetAppRequest& request, const GetAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAppOutcomeCallable getAppCallable(const Model::GetAppRequest& request) const;
			GetDataStreamOutcome getDataStream(const Model::GetDataStreamRequest &request)const;
			void getDataStreamAsync(const Model::GetDataStreamRequest& request, const GetDataStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataStreamOutcomeCallable getDataStreamCallable(const Model::GetDataStreamRequest& request) const;
			GetRegionInfoOutcome getRegionInfo(const Model::GetRegionInfoRequest &request)const;
			void getRegionInfoAsync(const Model::GetRegionInfoRequest& request, const GetRegionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRegionInfoOutcomeCallable getRegionInfoCallable(const Model::GetRegionInfoRequest& request) const;
			ListAccessTokensOutcome listAccessTokens(const Model::ListAccessTokensRequest &request)const;
			void listAccessTokensAsync(const Model::ListAccessTokensRequest& request, const ListAccessTokensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAccessTokensOutcomeCallable listAccessTokensCallable(const Model::ListAccessTokensRequest& request) const;
			ListAppsOutcome listApps(const Model::ListAppsRequest &request)const;
			void listAppsAsync(const Model::ListAppsRequest& request, const ListAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppsOutcomeCallable listAppsCallable(const Model::ListAppsRequest& request) const;
			ListDataStreamsOutcome listDataStreams(const Model::ListDataStreamsRequest &request)const;
			void listDataStreamsAsync(const Model::ListDataStreamsRequest& request, const ListDataStreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataStreamsOutcomeCallable listDataStreamsCallable(const Model::ListDataStreamsRequest& request) const;
			UpdateAppOutcome updateApp(const Model::UpdateAppRequest &request)const;
			void updateAppAsync(const Model::UpdateAppRequest& request, const UpdateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAppOutcomeCallable updateAppCallable(const Model::UpdateAppRequest& request) const;
			UpdateDataStreamOutcome updateDataStream(const Model::UpdateDataStreamRequest &request)const;
			void updateDataStreamAsync(const Model::UpdateDataStreamRequest& request, const UpdateDataStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDataStreamOutcomeCallable updateDataStreamCallable(const Model::UpdateDataStreamRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ES_SERVERLESS_ES_SERVERLESSCLIENT_H_
