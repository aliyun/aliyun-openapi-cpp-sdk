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

#ifndef ALIBABACLOUD_DG_DGCLIENT_H_
#define ALIBABACLOUD_DG_DGCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DgExport.h"
#include "model/AddDatabaseRequest.h"
#include "model/AddDatabaseResult.h"
#include "model/AddDatabaseListRequest.h"
#include "model/AddDatabaseListResult.h"
#include "model/ConnectDatabaseRequest.h"
#include "model/ConnectDatabaseResult.h"
#include "model/CreateDatabaseAccessPointRequest.h"
#include "model/CreateDatabaseAccessPointResult.h"
#include "model/CreateGatewayRequest.h"
#include "model/CreateGatewayResult.h"
#include "model/CreateGatewayVerifyCodeRequest.h"
#include "model/CreateGatewayVerifyCodeResult.h"
#include "model/DeleteDatabaseRequest.h"
#include "model/DeleteDatabaseResult.h"
#include "model/DeleteDatabaseAccessPointRequest.h"
#include "model/DeleteDatabaseAccessPointResult.h"
#include "model/DeleteGatewayRequest.h"
#include "model/DeleteGatewayResult.h"
#include "model/DeleteGatewayInstanceRequest.h"
#include "model/DeleteGatewayInstanceResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DownloadGatewayProgramRequest.h"
#include "model/DownloadGatewayProgramResult.h"
#include "model/FindUserGatewayByIdRequest.h"
#include "model/FindUserGatewayByIdResult.h"
#include "model/GetUserDatabasesRequest.h"
#include "model/GetUserDatabasesResult.h"
#include "model/GetUserGatewayInstancesRequest.h"
#include "model/GetUserGatewayInstancesResult.h"
#include "model/GetUserGatewaysRequest.h"
#include "model/GetUserGatewaysResult.h"
#include "model/ListDatabaseAccessPointRequest.h"
#include "model/ListDatabaseAccessPointResult.h"
#include "model/ModifyDatabaseRequest.h"
#include "model/ModifyDatabaseResult.h"
#include "model/ModifyGatewayRequest.h"
#include "model/ModifyGatewayResult.h"
#include "model/RetryDatabaseRequest.h"
#include "model/RetryDatabaseResult.h"
#include "model/StopGatewayRequest.h"
#include "model/StopGatewayResult.h"


namespace AlibabaCloud
{
	namespace Dg
	{
		class ALIBABACLOUD_DG_EXPORT DgClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddDatabaseResult> AddDatabaseOutcome;
			typedef std::future<AddDatabaseOutcome> AddDatabaseOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::AddDatabaseRequest&, const AddDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDatabaseAsyncHandler;
			typedef Outcome<Error, Model::AddDatabaseListResult> AddDatabaseListOutcome;
			typedef std::future<AddDatabaseListOutcome> AddDatabaseListOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::AddDatabaseListRequest&, const AddDatabaseListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDatabaseListAsyncHandler;
			typedef Outcome<Error, Model::ConnectDatabaseResult> ConnectDatabaseOutcome;
			typedef std::future<ConnectDatabaseOutcome> ConnectDatabaseOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::ConnectDatabaseRequest&, const ConnectDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConnectDatabaseAsyncHandler;
			typedef Outcome<Error, Model::CreateDatabaseAccessPointResult> CreateDatabaseAccessPointOutcome;
			typedef std::future<CreateDatabaseAccessPointOutcome> CreateDatabaseAccessPointOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::CreateDatabaseAccessPointRequest&, const CreateDatabaseAccessPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAccessPointAsyncHandler;
			typedef Outcome<Error, Model::CreateGatewayResult> CreateGatewayOutcome;
			typedef std::future<CreateGatewayOutcome> CreateGatewayOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::CreateGatewayRequest&, const CreateGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateGatewayVerifyCodeResult> CreateGatewayVerifyCodeOutcome;
			typedef std::future<CreateGatewayVerifyCodeOutcome> CreateGatewayVerifyCodeOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::CreateGatewayVerifyCodeRequest&, const CreateGatewayVerifyCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGatewayVerifyCodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatabaseResult> DeleteDatabaseOutcome;
			typedef std::future<DeleteDatabaseOutcome> DeleteDatabaseOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::DeleteDatabaseRequest&, const DeleteDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatabaseAccessPointResult> DeleteDatabaseAccessPointOutcome;
			typedef std::future<DeleteDatabaseAccessPointOutcome> DeleteDatabaseAccessPointOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::DeleteDatabaseAccessPointRequest&, const DeleteDatabaseAccessPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatabaseAccessPointAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayResult> DeleteGatewayOutcome;
			typedef std::future<DeleteGatewayOutcome> DeleteGatewayOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::DeleteGatewayRequest&, const DeleteGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayInstanceResult> DeleteGatewayInstanceOutcome;
			typedef std::future<DeleteGatewayInstanceOutcome> DeleteGatewayInstanceOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::DeleteGatewayInstanceRequest&, const DeleteGatewayInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DownloadGatewayProgramResult> DownloadGatewayProgramOutcome;
			typedef std::future<DownloadGatewayProgramOutcome> DownloadGatewayProgramOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::DownloadGatewayProgramRequest&, const DownloadGatewayProgramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadGatewayProgramAsyncHandler;
			typedef Outcome<Error, Model::FindUserGatewayByIdResult> FindUserGatewayByIdOutcome;
			typedef std::future<FindUserGatewayByIdOutcome> FindUserGatewayByIdOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::FindUserGatewayByIdRequest&, const FindUserGatewayByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindUserGatewayByIdAsyncHandler;
			typedef Outcome<Error, Model::GetUserDatabasesResult> GetUserDatabasesOutcome;
			typedef std::future<GetUserDatabasesOutcome> GetUserDatabasesOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::GetUserDatabasesRequest&, const GetUserDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserDatabasesAsyncHandler;
			typedef Outcome<Error, Model::GetUserGatewayInstancesResult> GetUserGatewayInstancesOutcome;
			typedef std::future<GetUserGatewayInstancesOutcome> GetUserGatewayInstancesOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::GetUserGatewayInstancesRequest&, const GetUserGatewayInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserGatewayInstancesAsyncHandler;
			typedef Outcome<Error, Model::GetUserGatewaysResult> GetUserGatewaysOutcome;
			typedef std::future<GetUserGatewaysOutcome> GetUserGatewaysOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::GetUserGatewaysRequest&, const GetUserGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserGatewaysAsyncHandler;
			typedef Outcome<Error, Model::ListDatabaseAccessPointResult> ListDatabaseAccessPointOutcome;
			typedef std::future<ListDatabaseAccessPointOutcome> ListDatabaseAccessPointOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::ListDatabaseAccessPointRequest&, const ListDatabaseAccessPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDatabaseAccessPointAsyncHandler;
			typedef Outcome<Error, Model::ModifyDatabaseResult> ModifyDatabaseOutcome;
			typedef std::future<ModifyDatabaseOutcome> ModifyDatabaseOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::ModifyDatabaseRequest&, const ModifyDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseAsyncHandler;
			typedef Outcome<Error, Model::ModifyGatewayResult> ModifyGatewayOutcome;
			typedef std::future<ModifyGatewayOutcome> ModifyGatewayOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::ModifyGatewayRequest&, const ModifyGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGatewayAsyncHandler;
			typedef Outcome<Error, Model::RetryDatabaseResult> RetryDatabaseOutcome;
			typedef std::future<RetryDatabaseOutcome> RetryDatabaseOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::RetryDatabaseRequest&, const RetryDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryDatabaseAsyncHandler;
			typedef Outcome<Error, Model::StopGatewayResult> StopGatewayOutcome;
			typedef std::future<StopGatewayOutcome> StopGatewayOutcomeCallable;
			typedef std::function<void(const DgClient*, const Model::StopGatewayRequest&, const StopGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopGatewayAsyncHandler;

			DgClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DgClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DgClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DgClient();
			AddDatabaseOutcome addDatabase(const Model::AddDatabaseRequest &request)const;
			void addDatabaseAsync(const Model::AddDatabaseRequest& request, const AddDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDatabaseOutcomeCallable addDatabaseCallable(const Model::AddDatabaseRequest& request) const;
			AddDatabaseListOutcome addDatabaseList(const Model::AddDatabaseListRequest &request)const;
			void addDatabaseListAsync(const Model::AddDatabaseListRequest& request, const AddDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDatabaseListOutcomeCallable addDatabaseListCallable(const Model::AddDatabaseListRequest& request) const;
			ConnectDatabaseOutcome connectDatabase(const Model::ConnectDatabaseRequest &request)const;
			void connectDatabaseAsync(const Model::ConnectDatabaseRequest& request, const ConnectDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConnectDatabaseOutcomeCallable connectDatabaseCallable(const Model::ConnectDatabaseRequest& request) const;
			CreateDatabaseAccessPointOutcome createDatabaseAccessPoint(const Model::CreateDatabaseAccessPointRequest &request)const;
			void createDatabaseAccessPointAsync(const Model::CreateDatabaseAccessPointRequest& request, const CreateDatabaseAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatabaseAccessPointOutcomeCallable createDatabaseAccessPointCallable(const Model::CreateDatabaseAccessPointRequest& request) const;
			CreateGatewayOutcome createGateway(const Model::CreateGatewayRequest &request)const;
			void createGatewayAsync(const Model::CreateGatewayRequest& request, const CreateGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGatewayOutcomeCallable createGatewayCallable(const Model::CreateGatewayRequest& request) const;
			CreateGatewayVerifyCodeOutcome createGatewayVerifyCode(const Model::CreateGatewayVerifyCodeRequest &request)const;
			void createGatewayVerifyCodeAsync(const Model::CreateGatewayVerifyCodeRequest& request, const CreateGatewayVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGatewayVerifyCodeOutcomeCallable createGatewayVerifyCodeCallable(const Model::CreateGatewayVerifyCodeRequest& request) const;
			DeleteDatabaseOutcome deleteDatabase(const Model::DeleteDatabaseRequest &request)const;
			void deleteDatabaseAsync(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatabaseOutcomeCallable deleteDatabaseCallable(const Model::DeleteDatabaseRequest& request) const;
			DeleteDatabaseAccessPointOutcome deleteDatabaseAccessPoint(const Model::DeleteDatabaseAccessPointRequest &request)const;
			void deleteDatabaseAccessPointAsync(const Model::DeleteDatabaseAccessPointRequest& request, const DeleteDatabaseAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatabaseAccessPointOutcomeCallable deleteDatabaseAccessPointCallable(const Model::DeleteDatabaseAccessPointRequest& request) const;
			DeleteGatewayOutcome deleteGateway(const Model::DeleteGatewayRequest &request)const;
			void deleteGatewayAsync(const Model::DeleteGatewayRequest& request, const DeleteGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayOutcomeCallable deleteGatewayCallable(const Model::DeleteGatewayRequest& request) const;
			DeleteGatewayInstanceOutcome deleteGatewayInstance(const Model::DeleteGatewayInstanceRequest &request)const;
			void deleteGatewayInstanceAsync(const Model::DeleteGatewayInstanceRequest& request, const DeleteGatewayInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayInstanceOutcomeCallable deleteGatewayInstanceCallable(const Model::DeleteGatewayInstanceRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DownloadGatewayProgramOutcome downloadGatewayProgram(const Model::DownloadGatewayProgramRequest &request)const;
			void downloadGatewayProgramAsync(const Model::DownloadGatewayProgramRequest& request, const DownloadGatewayProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadGatewayProgramOutcomeCallable downloadGatewayProgramCallable(const Model::DownloadGatewayProgramRequest& request) const;
			FindUserGatewayByIdOutcome findUserGatewayById(const Model::FindUserGatewayByIdRequest &request)const;
			void findUserGatewayByIdAsync(const Model::FindUserGatewayByIdRequest& request, const FindUserGatewayByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindUserGatewayByIdOutcomeCallable findUserGatewayByIdCallable(const Model::FindUserGatewayByIdRequest& request) const;
			GetUserDatabasesOutcome getUserDatabases(const Model::GetUserDatabasesRequest &request)const;
			void getUserDatabasesAsync(const Model::GetUserDatabasesRequest& request, const GetUserDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserDatabasesOutcomeCallable getUserDatabasesCallable(const Model::GetUserDatabasesRequest& request) const;
			GetUserGatewayInstancesOutcome getUserGatewayInstances(const Model::GetUserGatewayInstancesRequest &request)const;
			void getUserGatewayInstancesAsync(const Model::GetUserGatewayInstancesRequest& request, const GetUserGatewayInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserGatewayInstancesOutcomeCallable getUserGatewayInstancesCallable(const Model::GetUserGatewayInstancesRequest& request) const;
			GetUserGatewaysOutcome getUserGateways(const Model::GetUserGatewaysRequest &request)const;
			void getUserGatewaysAsync(const Model::GetUserGatewaysRequest& request, const GetUserGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserGatewaysOutcomeCallable getUserGatewaysCallable(const Model::GetUserGatewaysRequest& request) const;
			ListDatabaseAccessPointOutcome listDatabaseAccessPoint(const Model::ListDatabaseAccessPointRequest &request)const;
			void listDatabaseAccessPointAsync(const Model::ListDatabaseAccessPointRequest& request, const ListDatabaseAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDatabaseAccessPointOutcomeCallable listDatabaseAccessPointCallable(const Model::ListDatabaseAccessPointRequest& request) const;
			ModifyDatabaseOutcome modifyDatabase(const Model::ModifyDatabaseRequest &request)const;
			void modifyDatabaseAsync(const Model::ModifyDatabaseRequest& request, const ModifyDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDatabaseOutcomeCallable modifyDatabaseCallable(const Model::ModifyDatabaseRequest& request) const;
			ModifyGatewayOutcome modifyGateway(const Model::ModifyGatewayRequest &request)const;
			void modifyGatewayAsync(const Model::ModifyGatewayRequest& request, const ModifyGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGatewayOutcomeCallable modifyGatewayCallable(const Model::ModifyGatewayRequest& request) const;
			RetryDatabaseOutcome retryDatabase(const Model::RetryDatabaseRequest &request)const;
			void retryDatabaseAsync(const Model::RetryDatabaseRequest& request, const RetryDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryDatabaseOutcomeCallable retryDatabaseCallable(const Model::RetryDatabaseRequest& request) const;
			StopGatewayOutcome stopGateway(const Model::StopGatewayRequest &request)const;
			void stopGatewayAsync(const Model::StopGatewayRequest& request, const StopGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopGatewayOutcomeCallable stopGatewayCallable(const Model::StopGatewayRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DG_DGCLIENT_H_
