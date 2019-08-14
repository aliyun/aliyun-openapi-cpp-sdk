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

#ifndef ALIBABACLOUD_CSB_CSBCLIENT_H_
#define ALIBABACLOUD_CSB_CSBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CSBExport.h"
#include "model/DeleteServiceRequest.h"
#include "model/DeleteServiceResult.h"
#include "model/FindServiceListRequest.h"
#include "model/FindServiceListResult.h"
#include "model/PublishUnionCasServiceRequest.h"
#include "model/PublishUnionCasServiceResult.h"
#include "model/UpdateServiceListStatusRequest.h"
#include "model/UpdateServiceListStatusResult.h"
#include "model/CreateOrderRequest.h"
#include "model/CreateOrderResult.h"
#include "model/CreateProjectRequest.h"
#include "model/CreateProjectResult.h"
#include "model/DeleteServiceListRequest.h"
#include "model/DeleteServiceListResult.h"
#include "model/CommitSuccessedServicesRequest.h"
#include "model/CommitSuccessedServicesResult.h"
#include "model/FindOrderedListRequest.h"
#include "model/FindOrderedListResult.h"
#include "model/DeleteOrderListRequest.h"
#include "model/DeleteOrderListResult.h"
#include "model/ImportCredentialsRequest.h"
#include "model/ImportCredentialsResult.h"
#include "model/CreateCredentialsRequest.h"
#include "model/CreateCredentialsResult.h"
#include "model/DeleteCasServiceRequest.h"
#include "model/DeleteCasServiceResult.h"
#include "model/DeleteProjectListRequest.h"
#include "model/DeleteProjectListResult.h"
#include "model/FindInstanceListRequest.h"
#include "model/FindInstanceListResult.h"
#include "model/UpdateProjectListStatusRequest.h"
#include "model/UpdateProjectListStatusResult.h"
#include "model/PublishCasServiceRequest.h"
#include "model/PublishCasServiceResult.h"
#include "model/ReplaceCredentialRequest.h"
#include "model/ReplaceCredentialResult.h"
#include "model/FindProjectsNameListRequest.h"
#include "model/FindProjectsNameListResult.h"
#include "model/GetProjectRequest.h"
#include "model/GetProjectResult.h"
#include "model/DeleteUnionCasServiceRequest.h"
#include "model/DeleteUnionCasServiceResult.h"
#include "model/CheckServiceExistRequest.h"
#include "model/CheckServiceExistResult.h"
#include "model/UpdateOrderListRequest.h"
#include "model/UpdateOrderListResult.h"
#include "model/GetInstanceRequest.h"
#include "model/GetInstanceResult.h"
#include "model/GetOrderRequest.h"
#include "model/GetOrderResult.h"
#include "model/RenewCredentialsRequest.h"
#include "model/RenewCredentialsResult.h"
#include "model/DeleteCredentialsListRequest.h"
#include "model/DeleteCredentialsListResult.h"
#include "model/CreateServiceRequest.h"
#include "model/CreateServiceResult.h"
#include "model/FindServiceStatisticalDataRequest.h"
#include "model/FindServiceStatisticalDataResult.h"
#include "model/FindCredentialsListRequest.h"
#include "model/FindCredentialsListResult.h"
#include "model/ApproveOrderListRequest.h"
#include "model/ApproveOrderListResult.h"
#include "model/DeleteProjectRequest.h"
#include "model/DeleteProjectResult.h"
#include "model/UpdateServiceRequest.h"
#include "model/UpdateServiceResult.h"
#include "model/FindOrderableListRequest.h"
#include "model/FindOrderableListResult.h"
#include "model/UpdateProjectRequest.h"
#include "model/UpdateProjectResult.h"
#include "model/FindProjectListRequest.h"
#include "model/FindProjectListResult.h"
#include "model/FindApprovalOrderListRequest.h"
#include "model/FindApprovalOrderListResult.h"
#include "model/UpdateServiceQPSRequest.h"
#include "model/UpdateServiceQPSResult.h"
#include "model/UpdateOrderRequest.h"
#include "model/UpdateOrderResult.h"
#include "model/GetServiceRequest.h"
#include "model/GetServiceResult.h"
#include "model/FindApproveServiceListRequest.h"
#include "model/FindApproveServiceListResult.h"


namespace AlibabaCloud
{
	namespace CSB
	{
		class ALIBABACLOUD_CSB_EXPORT CSBClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DeleteServiceResult> DeleteServiceOutcome;
			typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::DeleteServiceRequest&, const DeleteServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceAsyncHandler;
			typedef Outcome<Error, Model::FindServiceListResult> FindServiceListOutcome;
			typedef std::future<FindServiceListOutcome> FindServiceListOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::FindServiceListRequest&, const FindServiceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindServiceListAsyncHandler;
			typedef Outcome<Error, Model::PublishUnionCasServiceResult> PublishUnionCasServiceOutcome;
			typedef std::future<PublishUnionCasServiceOutcome> PublishUnionCasServiceOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::PublishUnionCasServiceRequest&, const PublishUnionCasServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishUnionCasServiceAsyncHandler;
			typedef Outcome<Error, Model::UpdateServiceListStatusResult> UpdateServiceListStatusOutcome;
			typedef std::future<UpdateServiceListStatusOutcome> UpdateServiceListStatusOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::UpdateServiceListStatusRequest&, const UpdateServiceListStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceListStatusAsyncHandler;
			typedef Outcome<Error, Model::CreateOrderResult> CreateOrderOutcome;
			typedef std::future<CreateOrderOutcome> CreateOrderOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::CreateOrderRequest&, const CreateOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectResult> CreateProjectOutcome;
			typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::CreateProjectRequest&, const CreateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceListResult> DeleteServiceListOutcome;
			typedef std::future<DeleteServiceListOutcome> DeleteServiceListOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::DeleteServiceListRequest&, const DeleteServiceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceListAsyncHandler;
			typedef Outcome<Error, Model::CommitSuccessedServicesResult> CommitSuccessedServicesOutcome;
			typedef std::future<CommitSuccessedServicesOutcome> CommitSuccessedServicesOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::CommitSuccessedServicesRequest&, const CommitSuccessedServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CommitSuccessedServicesAsyncHandler;
			typedef Outcome<Error, Model::FindOrderedListResult> FindOrderedListOutcome;
			typedef std::future<FindOrderedListOutcome> FindOrderedListOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::FindOrderedListRequest&, const FindOrderedListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindOrderedListAsyncHandler;
			typedef Outcome<Error, Model::DeleteOrderListResult> DeleteOrderListOutcome;
			typedef std::future<DeleteOrderListOutcome> DeleteOrderListOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::DeleteOrderListRequest&, const DeleteOrderListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrderListAsyncHandler;
			typedef Outcome<Error, Model::ImportCredentialsResult> ImportCredentialsOutcome;
			typedef std::future<ImportCredentialsOutcome> ImportCredentialsOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::ImportCredentialsRequest&, const ImportCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportCredentialsAsyncHandler;
			typedef Outcome<Error, Model::CreateCredentialsResult> CreateCredentialsOutcome;
			typedef std::future<CreateCredentialsOutcome> CreateCredentialsOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::CreateCredentialsRequest&, const CreateCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCredentialsAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasServiceResult> DeleteCasServiceOutcome;
			typedef std::future<DeleteCasServiceOutcome> DeleteCasServiceOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::DeleteCasServiceRequest&, const DeleteCasServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasServiceAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectListResult> DeleteProjectListOutcome;
			typedef std::future<DeleteProjectListOutcome> DeleteProjectListOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::DeleteProjectListRequest&, const DeleteProjectListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectListAsyncHandler;
			typedef Outcome<Error, Model::FindInstanceListResult> FindInstanceListOutcome;
			typedef std::future<FindInstanceListOutcome> FindInstanceListOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::FindInstanceListRequest&, const FindInstanceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindInstanceListAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectListStatusResult> UpdateProjectListStatusOutcome;
			typedef std::future<UpdateProjectListStatusOutcome> UpdateProjectListStatusOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::UpdateProjectListStatusRequest&, const UpdateProjectListStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectListStatusAsyncHandler;
			typedef Outcome<Error, Model::PublishCasServiceResult> PublishCasServiceOutcome;
			typedef std::future<PublishCasServiceOutcome> PublishCasServiceOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::PublishCasServiceRequest&, const PublishCasServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishCasServiceAsyncHandler;
			typedef Outcome<Error, Model::ReplaceCredentialResult> ReplaceCredentialOutcome;
			typedef std::future<ReplaceCredentialOutcome> ReplaceCredentialOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::ReplaceCredentialRequest&, const ReplaceCredentialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceCredentialAsyncHandler;
			typedef Outcome<Error, Model::FindProjectsNameListResult> FindProjectsNameListOutcome;
			typedef std::future<FindProjectsNameListOutcome> FindProjectsNameListOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::FindProjectsNameListRequest&, const FindProjectsNameListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindProjectsNameListAsyncHandler;
			typedef Outcome<Error, Model::GetProjectResult> GetProjectOutcome;
			typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::GetProjectRequest&, const GetProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteUnionCasServiceResult> DeleteUnionCasServiceOutcome;
			typedef std::future<DeleteUnionCasServiceOutcome> DeleteUnionCasServiceOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::DeleteUnionCasServiceRequest&, const DeleteUnionCasServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUnionCasServiceAsyncHandler;
			typedef Outcome<Error, Model::CheckServiceExistResult> CheckServiceExistOutcome;
			typedef std::future<CheckServiceExistOutcome> CheckServiceExistOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::CheckServiceExistRequest&, const CheckServiceExistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckServiceExistAsyncHandler;
			typedef Outcome<Error, Model::UpdateOrderListResult> UpdateOrderListOutcome;
			typedef std::future<UpdateOrderListOutcome> UpdateOrderListOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::UpdateOrderListRequest&, const UpdateOrderListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrderListAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceResult> GetInstanceOutcome;
			typedef std::future<GetInstanceOutcome> GetInstanceOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::GetInstanceRequest&, const GetInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetOrderResult> GetOrderOutcome;
			typedef std::future<GetOrderOutcome> GetOrderOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::GetOrderRequest&, const GetOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOrderAsyncHandler;
			typedef Outcome<Error, Model::RenewCredentialsResult> RenewCredentialsOutcome;
			typedef std::future<RenewCredentialsOutcome> RenewCredentialsOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::RenewCredentialsRequest&, const RenewCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewCredentialsAsyncHandler;
			typedef Outcome<Error, Model::DeleteCredentialsListResult> DeleteCredentialsListOutcome;
			typedef std::future<DeleteCredentialsListOutcome> DeleteCredentialsListOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::DeleteCredentialsListRequest&, const DeleteCredentialsListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCredentialsListAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceResult> CreateServiceOutcome;
			typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::CreateServiceRequest&, const CreateServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceAsyncHandler;
			typedef Outcome<Error, Model::FindServiceStatisticalDataResult> FindServiceStatisticalDataOutcome;
			typedef std::future<FindServiceStatisticalDataOutcome> FindServiceStatisticalDataOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::FindServiceStatisticalDataRequest&, const FindServiceStatisticalDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindServiceStatisticalDataAsyncHandler;
			typedef Outcome<Error, Model::FindCredentialsListResult> FindCredentialsListOutcome;
			typedef std::future<FindCredentialsListOutcome> FindCredentialsListOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::FindCredentialsListRequest&, const FindCredentialsListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindCredentialsListAsyncHandler;
			typedef Outcome<Error, Model::ApproveOrderListResult> ApproveOrderListOutcome;
			typedef std::future<ApproveOrderListOutcome> ApproveOrderListOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::ApproveOrderListRequest&, const ApproveOrderListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApproveOrderListAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectResult> DeleteProjectOutcome;
			typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::DeleteProjectRequest&, const DeleteProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
			typedef Outcome<Error, Model::UpdateServiceResult> UpdateServiceOutcome;
			typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::UpdateServiceRequest&, const UpdateServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceAsyncHandler;
			typedef Outcome<Error, Model::FindOrderableListResult> FindOrderableListOutcome;
			typedef std::future<FindOrderableListOutcome> FindOrderableListOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::FindOrderableListRequest&, const FindOrderableListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindOrderableListAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectResult> UpdateProjectOutcome;
			typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::UpdateProjectRequest&, const UpdateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectAsyncHandler;
			typedef Outcome<Error, Model::FindProjectListResult> FindProjectListOutcome;
			typedef std::future<FindProjectListOutcome> FindProjectListOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::FindProjectListRequest&, const FindProjectListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindProjectListAsyncHandler;
			typedef Outcome<Error, Model::FindApprovalOrderListResult> FindApprovalOrderListOutcome;
			typedef std::future<FindApprovalOrderListOutcome> FindApprovalOrderListOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::FindApprovalOrderListRequest&, const FindApprovalOrderListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindApprovalOrderListAsyncHandler;
			typedef Outcome<Error, Model::UpdateServiceQPSResult> UpdateServiceQPSOutcome;
			typedef std::future<UpdateServiceQPSOutcome> UpdateServiceQPSOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::UpdateServiceQPSRequest&, const UpdateServiceQPSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceQPSAsyncHandler;
			typedef Outcome<Error, Model::UpdateOrderResult> UpdateOrderOutcome;
			typedef std::future<UpdateOrderOutcome> UpdateOrderOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::UpdateOrderRequest&, const UpdateOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrderAsyncHandler;
			typedef Outcome<Error, Model::GetServiceResult> GetServiceOutcome;
			typedef std::future<GetServiceOutcome> GetServiceOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::GetServiceRequest&, const GetServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceAsyncHandler;
			typedef Outcome<Error, Model::FindApproveServiceListResult> FindApproveServiceListOutcome;
			typedef std::future<FindApproveServiceListOutcome> FindApproveServiceListOutcomeCallable;
			typedef std::function<void(const CSBClient*, const Model::FindApproveServiceListRequest&, const FindApproveServiceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindApproveServiceListAsyncHandler;

			CSBClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CSBClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CSBClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CSBClient();
			DeleteServiceOutcome deleteService(const Model::DeleteServiceRequest &request)const;
			void deleteServiceAsync(const Model::DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceOutcomeCallable deleteServiceCallable(const Model::DeleteServiceRequest& request) const;
			FindServiceListOutcome findServiceList(const Model::FindServiceListRequest &request)const;
			void findServiceListAsync(const Model::FindServiceListRequest& request, const FindServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindServiceListOutcomeCallable findServiceListCallable(const Model::FindServiceListRequest& request) const;
			PublishUnionCasServiceOutcome publishUnionCasService(const Model::PublishUnionCasServiceRequest &request)const;
			void publishUnionCasServiceAsync(const Model::PublishUnionCasServiceRequest& request, const PublishUnionCasServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishUnionCasServiceOutcomeCallable publishUnionCasServiceCallable(const Model::PublishUnionCasServiceRequest& request) const;
			UpdateServiceListStatusOutcome updateServiceListStatus(const Model::UpdateServiceListStatusRequest &request)const;
			void updateServiceListStatusAsync(const Model::UpdateServiceListStatusRequest& request, const UpdateServiceListStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServiceListStatusOutcomeCallable updateServiceListStatusCallable(const Model::UpdateServiceListStatusRequest& request) const;
			CreateOrderOutcome createOrder(const Model::CreateOrderRequest &request)const;
			void createOrderAsync(const Model::CreateOrderRequest& request, const CreateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrderOutcomeCallable createOrderCallable(const Model::CreateOrderRequest& request) const;
			CreateProjectOutcome createProject(const Model::CreateProjectRequest &request)const;
			void createProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectOutcomeCallable createProjectCallable(const Model::CreateProjectRequest& request) const;
			DeleteServiceListOutcome deleteServiceList(const Model::DeleteServiceListRequest &request)const;
			void deleteServiceListAsync(const Model::DeleteServiceListRequest& request, const DeleteServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceListOutcomeCallable deleteServiceListCallable(const Model::DeleteServiceListRequest& request) const;
			CommitSuccessedServicesOutcome commitSuccessedServices(const Model::CommitSuccessedServicesRequest &request)const;
			void commitSuccessedServicesAsync(const Model::CommitSuccessedServicesRequest& request, const CommitSuccessedServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CommitSuccessedServicesOutcomeCallable commitSuccessedServicesCallable(const Model::CommitSuccessedServicesRequest& request) const;
			FindOrderedListOutcome findOrderedList(const Model::FindOrderedListRequest &request)const;
			void findOrderedListAsync(const Model::FindOrderedListRequest& request, const FindOrderedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindOrderedListOutcomeCallable findOrderedListCallable(const Model::FindOrderedListRequest& request) const;
			DeleteOrderListOutcome deleteOrderList(const Model::DeleteOrderListRequest &request)const;
			void deleteOrderListAsync(const Model::DeleteOrderListRequest& request, const DeleteOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOrderListOutcomeCallable deleteOrderListCallable(const Model::DeleteOrderListRequest& request) const;
			ImportCredentialsOutcome importCredentials(const Model::ImportCredentialsRequest &request)const;
			void importCredentialsAsync(const Model::ImportCredentialsRequest& request, const ImportCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportCredentialsOutcomeCallable importCredentialsCallable(const Model::ImportCredentialsRequest& request) const;
			CreateCredentialsOutcome createCredentials(const Model::CreateCredentialsRequest &request)const;
			void createCredentialsAsync(const Model::CreateCredentialsRequest& request, const CreateCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCredentialsOutcomeCallable createCredentialsCallable(const Model::CreateCredentialsRequest& request) const;
			DeleteCasServiceOutcome deleteCasService(const Model::DeleteCasServiceRequest &request)const;
			void deleteCasServiceAsync(const Model::DeleteCasServiceRequest& request, const DeleteCasServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasServiceOutcomeCallable deleteCasServiceCallable(const Model::DeleteCasServiceRequest& request) const;
			DeleteProjectListOutcome deleteProjectList(const Model::DeleteProjectListRequest &request)const;
			void deleteProjectListAsync(const Model::DeleteProjectListRequest& request, const DeleteProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectListOutcomeCallable deleteProjectListCallable(const Model::DeleteProjectListRequest& request) const;
			FindInstanceListOutcome findInstanceList(const Model::FindInstanceListRequest &request)const;
			void findInstanceListAsync(const Model::FindInstanceListRequest& request, const FindInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindInstanceListOutcomeCallable findInstanceListCallable(const Model::FindInstanceListRequest& request) const;
			UpdateProjectListStatusOutcome updateProjectListStatus(const Model::UpdateProjectListStatusRequest &request)const;
			void updateProjectListStatusAsync(const Model::UpdateProjectListStatusRequest& request, const UpdateProjectListStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectListStatusOutcomeCallable updateProjectListStatusCallable(const Model::UpdateProjectListStatusRequest& request) const;
			PublishCasServiceOutcome publishCasService(const Model::PublishCasServiceRequest &request)const;
			void publishCasServiceAsync(const Model::PublishCasServiceRequest& request, const PublishCasServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishCasServiceOutcomeCallable publishCasServiceCallable(const Model::PublishCasServiceRequest& request) const;
			ReplaceCredentialOutcome replaceCredential(const Model::ReplaceCredentialRequest &request)const;
			void replaceCredentialAsync(const Model::ReplaceCredentialRequest& request, const ReplaceCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReplaceCredentialOutcomeCallable replaceCredentialCallable(const Model::ReplaceCredentialRequest& request) const;
			FindProjectsNameListOutcome findProjectsNameList(const Model::FindProjectsNameListRequest &request)const;
			void findProjectsNameListAsync(const Model::FindProjectsNameListRequest& request, const FindProjectsNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindProjectsNameListOutcomeCallable findProjectsNameListCallable(const Model::FindProjectsNameListRequest& request) const;
			GetProjectOutcome getProject(const Model::GetProjectRequest &request)const;
			void getProjectAsync(const Model::GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectOutcomeCallable getProjectCallable(const Model::GetProjectRequest& request) const;
			DeleteUnionCasServiceOutcome deleteUnionCasService(const Model::DeleteUnionCasServiceRequest &request)const;
			void deleteUnionCasServiceAsync(const Model::DeleteUnionCasServiceRequest& request, const DeleteUnionCasServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUnionCasServiceOutcomeCallable deleteUnionCasServiceCallable(const Model::DeleteUnionCasServiceRequest& request) const;
			CheckServiceExistOutcome checkServiceExist(const Model::CheckServiceExistRequest &request)const;
			void checkServiceExistAsync(const Model::CheckServiceExistRequest& request, const CheckServiceExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckServiceExistOutcomeCallable checkServiceExistCallable(const Model::CheckServiceExistRequest& request) const;
			UpdateOrderListOutcome updateOrderList(const Model::UpdateOrderListRequest &request)const;
			void updateOrderListAsync(const Model::UpdateOrderListRequest& request, const UpdateOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOrderListOutcomeCallable updateOrderListCallable(const Model::UpdateOrderListRequest& request) const;
			GetInstanceOutcome getInstance(const Model::GetInstanceRequest &request)const;
			void getInstanceAsync(const Model::GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceOutcomeCallable getInstanceCallable(const Model::GetInstanceRequest& request) const;
			GetOrderOutcome getOrder(const Model::GetOrderRequest &request)const;
			void getOrderAsync(const Model::GetOrderRequest& request, const GetOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOrderOutcomeCallable getOrderCallable(const Model::GetOrderRequest& request) const;
			RenewCredentialsOutcome renewCredentials(const Model::RenewCredentialsRequest &request)const;
			void renewCredentialsAsync(const Model::RenewCredentialsRequest& request, const RenewCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewCredentialsOutcomeCallable renewCredentialsCallable(const Model::RenewCredentialsRequest& request) const;
			DeleteCredentialsListOutcome deleteCredentialsList(const Model::DeleteCredentialsListRequest &request)const;
			void deleteCredentialsListAsync(const Model::DeleteCredentialsListRequest& request, const DeleteCredentialsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCredentialsListOutcomeCallable deleteCredentialsListCallable(const Model::DeleteCredentialsListRequest& request) const;
			CreateServiceOutcome createService(const Model::CreateServiceRequest &request)const;
			void createServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceOutcomeCallable createServiceCallable(const Model::CreateServiceRequest& request) const;
			FindServiceStatisticalDataOutcome findServiceStatisticalData(const Model::FindServiceStatisticalDataRequest &request)const;
			void findServiceStatisticalDataAsync(const Model::FindServiceStatisticalDataRequest& request, const FindServiceStatisticalDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindServiceStatisticalDataOutcomeCallable findServiceStatisticalDataCallable(const Model::FindServiceStatisticalDataRequest& request) const;
			FindCredentialsListOutcome findCredentialsList(const Model::FindCredentialsListRequest &request)const;
			void findCredentialsListAsync(const Model::FindCredentialsListRequest& request, const FindCredentialsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindCredentialsListOutcomeCallable findCredentialsListCallable(const Model::FindCredentialsListRequest& request) const;
			ApproveOrderListOutcome approveOrderList(const Model::ApproveOrderListRequest &request)const;
			void approveOrderListAsync(const Model::ApproveOrderListRequest& request, const ApproveOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApproveOrderListOutcomeCallable approveOrderListCallable(const Model::ApproveOrderListRequest& request) const;
			DeleteProjectOutcome deleteProject(const Model::DeleteProjectRequest &request)const;
			void deleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectOutcomeCallable deleteProjectCallable(const Model::DeleteProjectRequest& request) const;
			UpdateServiceOutcome updateService(const Model::UpdateServiceRequest &request)const;
			void updateServiceAsync(const Model::UpdateServiceRequest& request, const UpdateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServiceOutcomeCallable updateServiceCallable(const Model::UpdateServiceRequest& request) const;
			FindOrderableListOutcome findOrderableList(const Model::FindOrderableListRequest &request)const;
			void findOrderableListAsync(const Model::FindOrderableListRequest& request, const FindOrderableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindOrderableListOutcomeCallable findOrderableListCallable(const Model::FindOrderableListRequest& request) const;
			UpdateProjectOutcome updateProject(const Model::UpdateProjectRequest &request)const;
			void updateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectOutcomeCallable updateProjectCallable(const Model::UpdateProjectRequest& request) const;
			FindProjectListOutcome findProjectList(const Model::FindProjectListRequest &request)const;
			void findProjectListAsync(const Model::FindProjectListRequest& request, const FindProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindProjectListOutcomeCallable findProjectListCallable(const Model::FindProjectListRequest& request) const;
			FindApprovalOrderListOutcome findApprovalOrderList(const Model::FindApprovalOrderListRequest &request)const;
			void findApprovalOrderListAsync(const Model::FindApprovalOrderListRequest& request, const FindApprovalOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindApprovalOrderListOutcomeCallable findApprovalOrderListCallable(const Model::FindApprovalOrderListRequest& request) const;
			UpdateServiceQPSOutcome updateServiceQPS(const Model::UpdateServiceQPSRequest &request)const;
			void updateServiceQPSAsync(const Model::UpdateServiceQPSRequest& request, const UpdateServiceQPSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServiceQPSOutcomeCallable updateServiceQPSCallable(const Model::UpdateServiceQPSRequest& request) const;
			UpdateOrderOutcome updateOrder(const Model::UpdateOrderRequest &request)const;
			void updateOrderAsync(const Model::UpdateOrderRequest& request, const UpdateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOrderOutcomeCallable updateOrderCallable(const Model::UpdateOrderRequest& request) const;
			GetServiceOutcome getService(const Model::GetServiceRequest &request)const;
			void getServiceAsync(const Model::GetServiceRequest& request, const GetServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceOutcomeCallable getServiceCallable(const Model::GetServiceRequest& request) const;
			FindApproveServiceListOutcome findApproveServiceList(const Model::FindApproveServiceListRequest &request)const;
			void findApproveServiceListAsync(const Model::FindApproveServiceListRequest& request, const FindApproveServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindApproveServiceListOutcomeCallable findApproveServiceListCallable(const Model::FindApproveServiceListRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CSB_CSBCLIENT_H_
