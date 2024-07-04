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

#ifndef ALIBABACLOUD_NIS_NISCLIENT_H_
#define ALIBABACLOUD_NIS_NISCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "NisExport.h"
#include "model/CreateAndAnalyzeNetworkPathRequest.h"
#include "model/CreateAndAnalyzeNetworkPathResult.h"
#include "model/CreateNetworkPathRequest.h"
#include "model/CreateNetworkPathResult.h"
#include "model/CreateNetworkReachableAnalysisRequest.h"
#include "model/CreateNetworkReachableAnalysisResult.h"
#include "model/DeleteNetworkPathRequest.h"
#include "model/DeleteNetworkPathResult.h"
#include "model/DeleteNetworkReachableAnalysisRequest.h"
#include "model/DeleteNetworkReachableAnalysisResult.h"
#include "model/GetInternetTupleRequest.h"
#include "model/GetInternetTupleResult.h"
#include "model/GetNatTopNRequest.h"
#include "model/GetNatTopNResult.h"
#include "model/GetNetworkReachableAnalysisRequest.h"
#include "model/GetNetworkReachableAnalysisResult.h"
#include "model/GetNisNetworkMetricsRequest.h"
#include "model/GetNisNetworkMetricsResult.h"
#include "model/GetNisNetworkRankingRequest.h"
#include "model/GetNisNetworkRankingResult.h"
#include "model/GetTransitRouterFlowTopNRequest.h"
#include "model/GetTransitRouterFlowTopNResult.h"
#include "model/GetVbrFlowTopNRequest.h"
#include "model/GetVbrFlowTopNResult.h"


namespace AlibabaCloud
{
	namespace Nis
	{
		class ALIBABACLOUD_NIS_EXPORT NisClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateAndAnalyzeNetworkPathResult> CreateAndAnalyzeNetworkPathOutcome;
			typedef std::future<CreateAndAnalyzeNetworkPathOutcome> CreateAndAnalyzeNetworkPathOutcomeCallable;
			typedef std::function<void(const NisClient*, const Model::CreateAndAnalyzeNetworkPathRequest&, const CreateAndAnalyzeNetworkPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndAnalyzeNetworkPathAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkPathResult> CreateNetworkPathOutcome;
			typedef std::future<CreateNetworkPathOutcome> CreateNetworkPathOutcomeCallable;
			typedef std::function<void(const NisClient*, const Model::CreateNetworkPathRequest&, const CreateNetworkPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkPathAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkReachableAnalysisResult> CreateNetworkReachableAnalysisOutcome;
			typedef std::future<CreateNetworkReachableAnalysisOutcome> CreateNetworkReachableAnalysisOutcomeCallable;
			typedef std::function<void(const NisClient*, const Model::CreateNetworkReachableAnalysisRequest&, const CreateNetworkReachableAnalysisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkReachableAnalysisAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkPathResult> DeleteNetworkPathOutcome;
			typedef std::future<DeleteNetworkPathOutcome> DeleteNetworkPathOutcomeCallable;
			typedef std::function<void(const NisClient*, const Model::DeleteNetworkPathRequest&, const DeleteNetworkPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkPathAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkReachableAnalysisResult> DeleteNetworkReachableAnalysisOutcome;
			typedef std::future<DeleteNetworkReachableAnalysisOutcome> DeleteNetworkReachableAnalysisOutcomeCallable;
			typedef std::function<void(const NisClient*, const Model::DeleteNetworkReachableAnalysisRequest&, const DeleteNetworkReachableAnalysisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkReachableAnalysisAsyncHandler;
			typedef Outcome<Error, Model::GetInternetTupleResult> GetInternetTupleOutcome;
			typedef std::future<GetInternetTupleOutcome> GetInternetTupleOutcomeCallable;
			typedef std::function<void(const NisClient*, const Model::GetInternetTupleRequest&, const GetInternetTupleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInternetTupleAsyncHandler;
			typedef Outcome<Error, Model::GetNatTopNResult> GetNatTopNOutcome;
			typedef std::future<GetNatTopNOutcome> GetNatTopNOutcomeCallable;
			typedef std::function<void(const NisClient*, const Model::GetNatTopNRequest&, const GetNatTopNOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNatTopNAsyncHandler;
			typedef Outcome<Error, Model::GetNetworkReachableAnalysisResult> GetNetworkReachableAnalysisOutcome;
			typedef std::future<GetNetworkReachableAnalysisOutcome> GetNetworkReachableAnalysisOutcomeCallable;
			typedef std::function<void(const NisClient*, const Model::GetNetworkReachableAnalysisRequest&, const GetNetworkReachableAnalysisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNetworkReachableAnalysisAsyncHandler;
			typedef Outcome<Error, Model::GetNisNetworkMetricsResult> GetNisNetworkMetricsOutcome;
			typedef std::future<GetNisNetworkMetricsOutcome> GetNisNetworkMetricsOutcomeCallable;
			typedef std::function<void(const NisClient*, const Model::GetNisNetworkMetricsRequest&, const GetNisNetworkMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNisNetworkMetricsAsyncHandler;
			typedef Outcome<Error, Model::GetNisNetworkRankingResult> GetNisNetworkRankingOutcome;
			typedef std::future<GetNisNetworkRankingOutcome> GetNisNetworkRankingOutcomeCallable;
			typedef std::function<void(const NisClient*, const Model::GetNisNetworkRankingRequest&, const GetNisNetworkRankingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNisNetworkRankingAsyncHandler;
			typedef Outcome<Error, Model::GetTransitRouterFlowTopNResult> GetTransitRouterFlowTopNOutcome;
			typedef std::future<GetTransitRouterFlowTopNOutcome> GetTransitRouterFlowTopNOutcomeCallable;
			typedef std::function<void(const NisClient*, const Model::GetTransitRouterFlowTopNRequest&, const GetTransitRouterFlowTopNOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTransitRouterFlowTopNAsyncHandler;
			typedef Outcome<Error, Model::GetVbrFlowTopNResult> GetVbrFlowTopNOutcome;
			typedef std::future<GetVbrFlowTopNOutcome> GetVbrFlowTopNOutcomeCallable;
			typedef std::function<void(const NisClient*, const Model::GetVbrFlowTopNRequest&, const GetVbrFlowTopNOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVbrFlowTopNAsyncHandler;

			NisClient(const Credentials &credentials, const ClientConfiguration &configuration);
			NisClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			NisClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~NisClient();
			CreateAndAnalyzeNetworkPathOutcome createAndAnalyzeNetworkPath(const Model::CreateAndAnalyzeNetworkPathRequest &request)const;
			void createAndAnalyzeNetworkPathAsync(const Model::CreateAndAnalyzeNetworkPathRequest& request, const CreateAndAnalyzeNetworkPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAndAnalyzeNetworkPathOutcomeCallable createAndAnalyzeNetworkPathCallable(const Model::CreateAndAnalyzeNetworkPathRequest& request) const;
			CreateNetworkPathOutcome createNetworkPath(const Model::CreateNetworkPathRequest &request)const;
			void createNetworkPathAsync(const Model::CreateNetworkPathRequest& request, const CreateNetworkPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkPathOutcomeCallable createNetworkPathCallable(const Model::CreateNetworkPathRequest& request) const;
			CreateNetworkReachableAnalysisOutcome createNetworkReachableAnalysis(const Model::CreateNetworkReachableAnalysisRequest &request)const;
			void createNetworkReachableAnalysisAsync(const Model::CreateNetworkReachableAnalysisRequest& request, const CreateNetworkReachableAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkReachableAnalysisOutcomeCallable createNetworkReachableAnalysisCallable(const Model::CreateNetworkReachableAnalysisRequest& request) const;
			DeleteNetworkPathOutcome deleteNetworkPath(const Model::DeleteNetworkPathRequest &request)const;
			void deleteNetworkPathAsync(const Model::DeleteNetworkPathRequest& request, const DeleteNetworkPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkPathOutcomeCallable deleteNetworkPathCallable(const Model::DeleteNetworkPathRequest& request) const;
			DeleteNetworkReachableAnalysisOutcome deleteNetworkReachableAnalysis(const Model::DeleteNetworkReachableAnalysisRequest &request)const;
			void deleteNetworkReachableAnalysisAsync(const Model::DeleteNetworkReachableAnalysisRequest& request, const DeleteNetworkReachableAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkReachableAnalysisOutcomeCallable deleteNetworkReachableAnalysisCallable(const Model::DeleteNetworkReachableAnalysisRequest& request) const;
			GetInternetTupleOutcome getInternetTuple(const Model::GetInternetTupleRequest &request)const;
			void getInternetTupleAsync(const Model::GetInternetTupleRequest& request, const GetInternetTupleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInternetTupleOutcomeCallable getInternetTupleCallable(const Model::GetInternetTupleRequest& request) const;
			GetNatTopNOutcome getNatTopN(const Model::GetNatTopNRequest &request)const;
			void getNatTopNAsync(const Model::GetNatTopNRequest& request, const GetNatTopNAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNatTopNOutcomeCallable getNatTopNCallable(const Model::GetNatTopNRequest& request) const;
			GetNetworkReachableAnalysisOutcome getNetworkReachableAnalysis(const Model::GetNetworkReachableAnalysisRequest &request)const;
			void getNetworkReachableAnalysisAsync(const Model::GetNetworkReachableAnalysisRequest& request, const GetNetworkReachableAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNetworkReachableAnalysisOutcomeCallable getNetworkReachableAnalysisCallable(const Model::GetNetworkReachableAnalysisRequest& request) const;
			GetNisNetworkMetricsOutcome getNisNetworkMetrics(const Model::GetNisNetworkMetricsRequest &request)const;
			void getNisNetworkMetricsAsync(const Model::GetNisNetworkMetricsRequest& request, const GetNisNetworkMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNisNetworkMetricsOutcomeCallable getNisNetworkMetricsCallable(const Model::GetNisNetworkMetricsRequest& request) const;
			GetNisNetworkRankingOutcome getNisNetworkRanking(const Model::GetNisNetworkRankingRequest &request)const;
			void getNisNetworkRankingAsync(const Model::GetNisNetworkRankingRequest& request, const GetNisNetworkRankingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNisNetworkRankingOutcomeCallable getNisNetworkRankingCallable(const Model::GetNisNetworkRankingRequest& request) const;
			GetTransitRouterFlowTopNOutcome getTransitRouterFlowTopN(const Model::GetTransitRouterFlowTopNRequest &request)const;
			void getTransitRouterFlowTopNAsync(const Model::GetTransitRouterFlowTopNRequest& request, const GetTransitRouterFlowTopNAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTransitRouterFlowTopNOutcomeCallable getTransitRouterFlowTopNCallable(const Model::GetTransitRouterFlowTopNRequest& request) const;
			GetVbrFlowTopNOutcome getVbrFlowTopN(const Model::GetVbrFlowTopNRequest &request)const;
			void getVbrFlowTopNAsync(const Model::GetVbrFlowTopNRequest& request, const GetVbrFlowTopNAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVbrFlowTopNOutcomeCallable getVbrFlowTopNCallable(const Model::GetVbrFlowTopNRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_NIS_NISCLIENT_H_
