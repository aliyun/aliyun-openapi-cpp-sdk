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

#ifndef ALIBABACLOUD_QIANZHOU_QIANZHOUCLIENT_H_
#define ALIBABACLOUD_QIANZHOU_QIANZHOUCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "QianzhouExport.h"
#include "model/AICreateSessionMessageRequest.h"
#include "model/AICreateSessionMessageResult.h"
#include "model/CreateDiagnosisRequest.h"
#include "model/CreateDiagnosisResult.h"
#include "model/GetClusterRequest.h"
#include "model/GetClusterResult.h"
#include "model/GetClusterWarningRequest.h"
#include "model/GetClusterWarningResult.h"
#include "model/GetDiagnosisResultRequest.h"
#include "model/GetDiagnosisResultResult.h"
#include "model/GetUserClusterWarningRequest.h"
#include "model/GetUserClusterWarningResult.h"
#include "model/GetWebshellTokenRequest.h"
#include "model/GetWebshellTokenResult.h"
#include "model/HelloRequest.h"
#include "model/HelloResult.h"
#include "model/ListClusterDeprecatedAPIRequest.h"
#include "model/ListClusterDeprecatedAPIResult.h"
#include "model/ListClusterImagesRequest.h"
#include "model/ListClusterImagesResult.h"
#include "model/ListUserClustersRequest.h"
#include "model/ListUserClustersResult.h"
#include "model/QueryByInstanceInfoRequest.h"
#include "model/QueryByInstanceInfoResult.h"
#include "model/QueryNodeInfoRequest.h"
#include "model/QueryNodeInfoResult.h"


namespace AlibabaCloud
{
	namespace Qianzhou
	{
		class ALIBABACLOUD_QIANZHOU_EXPORT QianzhouClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::AICreateSessionMessageResult> AICreateSessionMessageOutcome;
			typedef std::future<AICreateSessionMessageOutcome> AICreateSessionMessageOutcomeCallable;
			typedef std::function<void(const QianzhouClient*, const Model::AICreateSessionMessageRequest&, const AICreateSessionMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AICreateSessionMessageAsyncHandler;
			typedef Outcome<Error, Model::CreateDiagnosisResult> CreateDiagnosisOutcome;
			typedef std::future<CreateDiagnosisOutcome> CreateDiagnosisOutcomeCallable;
			typedef std::function<void(const QianzhouClient*, const Model::CreateDiagnosisRequest&, const CreateDiagnosisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDiagnosisAsyncHandler;
			typedef Outcome<Error, Model::GetClusterResult> GetClusterOutcome;
			typedef std::future<GetClusterOutcome> GetClusterOutcomeCallable;
			typedef std::function<void(const QianzhouClient*, const Model::GetClusterRequest&, const GetClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterAsyncHandler;
			typedef Outcome<Error, Model::GetClusterWarningResult> GetClusterWarningOutcome;
			typedef std::future<GetClusterWarningOutcome> GetClusterWarningOutcomeCallable;
			typedef std::function<void(const QianzhouClient*, const Model::GetClusterWarningRequest&, const GetClusterWarningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterWarningAsyncHandler;
			typedef Outcome<Error, Model::GetDiagnosisResultResult> GetDiagnosisResultOutcome;
			typedef std::future<GetDiagnosisResultOutcome> GetDiagnosisResultOutcomeCallable;
			typedef std::function<void(const QianzhouClient*, const Model::GetDiagnosisResultRequest&, const GetDiagnosisResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDiagnosisResultAsyncHandler;
			typedef Outcome<Error, Model::GetUserClusterWarningResult> GetUserClusterWarningOutcome;
			typedef std::future<GetUserClusterWarningOutcome> GetUserClusterWarningOutcomeCallable;
			typedef std::function<void(const QianzhouClient*, const Model::GetUserClusterWarningRequest&, const GetUserClusterWarningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserClusterWarningAsyncHandler;
			typedef Outcome<Error, Model::GetWebshellTokenResult> GetWebshellTokenOutcome;
			typedef std::future<GetWebshellTokenOutcome> GetWebshellTokenOutcomeCallable;
			typedef std::function<void(const QianzhouClient*, const Model::GetWebshellTokenRequest&, const GetWebshellTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWebshellTokenAsyncHandler;
			typedef Outcome<Error, Model::HelloResult> HelloOutcome;
			typedef std::future<HelloOutcome> HelloOutcomeCallable;
			typedef std::function<void(const QianzhouClient*, const Model::HelloRequest&, const HelloOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HelloAsyncHandler;
			typedef Outcome<Error, Model::ListClusterDeprecatedAPIResult> ListClusterDeprecatedAPIOutcome;
			typedef std::future<ListClusterDeprecatedAPIOutcome> ListClusterDeprecatedAPIOutcomeCallable;
			typedef std::function<void(const QianzhouClient*, const Model::ListClusterDeprecatedAPIRequest&, const ListClusterDeprecatedAPIOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterDeprecatedAPIAsyncHandler;
			typedef Outcome<Error, Model::ListClusterImagesResult> ListClusterImagesOutcome;
			typedef std::future<ListClusterImagesOutcome> ListClusterImagesOutcomeCallable;
			typedef std::function<void(const QianzhouClient*, const Model::ListClusterImagesRequest&, const ListClusterImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterImagesAsyncHandler;
			typedef Outcome<Error, Model::ListUserClustersResult> ListUserClustersOutcome;
			typedef std::future<ListUserClustersOutcome> ListUserClustersOutcomeCallable;
			typedef std::function<void(const QianzhouClient*, const Model::ListUserClustersRequest&, const ListUserClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserClustersAsyncHandler;
			typedef Outcome<Error, Model::QueryByInstanceInfoResult> QueryByInstanceInfoOutcome;
			typedef std::future<QueryByInstanceInfoOutcome> QueryByInstanceInfoOutcomeCallable;
			typedef std::function<void(const QianzhouClient*, const Model::QueryByInstanceInfoRequest&, const QueryByInstanceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryByInstanceInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryNodeInfoResult> QueryNodeInfoOutcome;
			typedef std::future<QueryNodeInfoOutcome> QueryNodeInfoOutcomeCallable;
			typedef std::function<void(const QianzhouClient*, const Model::QueryNodeInfoRequest&, const QueryNodeInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryNodeInfoAsyncHandler;

			QianzhouClient(const Credentials &credentials, const ClientConfiguration &configuration);
			QianzhouClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			QianzhouClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~QianzhouClient();
			AICreateSessionMessageOutcome aICreateSessionMessage(const Model::AICreateSessionMessageRequest &request)const;
			void aICreateSessionMessageAsync(const Model::AICreateSessionMessageRequest& request, const AICreateSessionMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AICreateSessionMessageOutcomeCallable aICreateSessionMessageCallable(const Model::AICreateSessionMessageRequest& request) const;
			CreateDiagnosisOutcome createDiagnosis(const Model::CreateDiagnosisRequest &request)const;
			void createDiagnosisAsync(const Model::CreateDiagnosisRequest& request, const CreateDiagnosisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDiagnosisOutcomeCallable createDiagnosisCallable(const Model::CreateDiagnosisRequest& request) const;
			GetClusterOutcome getCluster(const Model::GetClusterRequest &request)const;
			void getClusterAsync(const Model::GetClusterRequest& request, const GetClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterOutcomeCallable getClusterCallable(const Model::GetClusterRequest& request) const;
			GetClusterWarningOutcome getClusterWarning(const Model::GetClusterWarningRequest &request)const;
			void getClusterWarningAsync(const Model::GetClusterWarningRequest& request, const GetClusterWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterWarningOutcomeCallable getClusterWarningCallable(const Model::GetClusterWarningRequest& request) const;
			GetDiagnosisResultOutcome getDiagnosisResult(const Model::GetDiagnosisResultRequest &request)const;
			void getDiagnosisResultAsync(const Model::GetDiagnosisResultRequest& request, const GetDiagnosisResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDiagnosisResultOutcomeCallable getDiagnosisResultCallable(const Model::GetDiagnosisResultRequest& request) const;
			GetUserClusterWarningOutcome getUserClusterWarning(const Model::GetUserClusterWarningRequest &request)const;
			void getUserClusterWarningAsync(const Model::GetUserClusterWarningRequest& request, const GetUserClusterWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserClusterWarningOutcomeCallable getUserClusterWarningCallable(const Model::GetUserClusterWarningRequest& request) const;
			GetWebshellTokenOutcome getWebshellToken(const Model::GetWebshellTokenRequest &request)const;
			void getWebshellTokenAsync(const Model::GetWebshellTokenRequest& request, const GetWebshellTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWebshellTokenOutcomeCallable getWebshellTokenCallable(const Model::GetWebshellTokenRequest& request) const;
			HelloOutcome hello(const Model::HelloRequest &request)const;
			void helloAsync(const Model::HelloRequest& request, const HelloAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HelloOutcomeCallable helloCallable(const Model::HelloRequest& request) const;
			ListClusterDeprecatedAPIOutcome listClusterDeprecatedAPI(const Model::ListClusterDeprecatedAPIRequest &request)const;
			void listClusterDeprecatedAPIAsync(const Model::ListClusterDeprecatedAPIRequest& request, const ListClusterDeprecatedAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterDeprecatedAPIOutcomeCallable listClusterDeprecatedAPICallable(const Model::ListClusterDeprecatedAPIRequest& request) const;
			ListClusterImagesOutcome listClusterImages(const Model::ListClusterImagesRequest &request)const;
			void listClusterImagesAsync(const Model::ListClusterImagesRequest& request, const ListClusterImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterImagesOutcomeCallable listClusterImagesCallable(const Model::ListClusterImagesRequest& request) const;
			ListUserClustersOutcome listUserClusters(const Model::ListUserClustersRequest &request)const;
			void listUserClustersAsync(const Model::ListUserClustersRequest& request, const ListUserClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserClustersOutcomeCallable listUserClustersCallable(const Model::ListUserClustersRequest& request) const;
			QueryByInstanceInfoOutcome queryByInstanceInfo(const Model::QueryByInstanceInfoRequest &request)const;
			void queryByInstanceInfoAsync(const Model::QueryByInstanceInfoRequest& request, const QueryByInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryByInstanceInfoOutcomeCallable queryByInstanceInfoCallable(const Model::QueryByInstanceInfoRequest& request) const;
			QueryNodeInfoOutcome queryNodeInfo(const Model::QueryNodeInfoRequest &request)const;
			void queryNodeInfoAsync(const Model::QueryNodeInfoRequest& request, const QueryNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryNodeInfoOutcomeCallable queryNodeInfoCallable(const Model::QueryNodeInfoRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_QIANZHOU_QIANZHOUCLIENT_H_
