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

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER_COMPUTENESTSUPPLIERCLIENT_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER_COMPUTENESTSUPPLIERCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ComputeNestSupplierExport.h"
#include "model/CreateArtifactRequest.h"
#include "model/CreateArtifactResult.h"
#include "model/CreateServiceRequest.h"
#include "model/CreateServiceResult.h"
#include "model/DeleteArtifactRequest.h"
#include "model/DeleteArtifactResult.h"
#include "model/DeleteServiceRequest.h"
#include "model/DeleteServiceResult.h"
#include "model/GetArtifactRequest.h"
#include "model/GetArtifactResult.h"
#include "model/GetArtifactRepositoryCredentialsRequest.h"
#include "model/GetArtifactRepositoryCredentialsResult.h"
#include "model/GetServiceRequest.h"
#include "model/GetServiceResult.h"
#include "model/GetServiceEstimateCostRequest.h"
#include "model/GetServiceEstimateCostResult.h"
#include "model/GetServiceInstanceRequest.h"
#include "model/GetServiceInstanceResult.h"
#include "model/GetUploadCredentialsRequest.h"
#include "model/GetUploadCredentialsResult.h"
#include "model/ListArtifactVersionsRequest.h"
#include "model/ListArtifactVersionsResult.h"
#include "model/ListArtifactsRequest.h"
#include "model/ListArtifactsResult.h"
#include "model/ListServiceInstancesRequest.h"
#include "model/ListServiceInstancesResult.h"
#include "model/ListServiceUsagesRequest.h"
#include "model/ListServiceUsagesResult.h"
#include "model/ListServicesRequest.h"
#include "model/ListServicesResult.h"
#include "model/ReleaseArtifactRequest.h"
#include "model/ReleaseArtifactResult.h"
#include "model/UpdateArtifactRequest.h"
#include "model/UpdateArtifactResult.h"
#include "model/UpdateServiceRequest.h"
#include "model/UpdateServiceResult.h"


namespace AlibabaCloud
{
	namespace ComputeNestSupplier
	{
		class ALIBABACLOUD_COMPUTENESTSUPPLIER_EXPORT ComputeNestSupplierClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateArtifactResult> CreateArtifactOutcome;
			typedef std::future<CreateArtifactOutcome> CreateArtifactOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::CreateArtifactRequest&, const CreateArtifactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateArtifactAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceResult> CreateServiceOutcome;
			typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::CreateServiceRequest&, const CreateServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceAsyncHandler;
			typedef Outcome<Error, Model::DeleteArtifactResult> DeleteArtifactOutcome;
			typedef std::future<DeleteArtifactOutcome> DeleteArtifactOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::DeleteArtifactRequest&, const DeleteArtifactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteArtifactAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceResult> DeleteServiceOutcome;
			typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::DeleteServiceRequest&, const DeleteServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceAsyncHandler;
			typedef Outcome<Error, Model::GetArtifactResult> GetArtifactOutcome;
			typedef std::future<GetArtifactOutcome> GetArtifactOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::GetArtifactRequest&, const GetArtifactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetArtifactAsyncHandler;
			typedef Outcome<Error, Model::GetArtifactRepositoryCredentialsResult> GetArtifactRepositoryCredentialsOutcome;
			typedef std::future<GetArtifactRepositoryCredentialsOutcome> GetArtifactRepositoryCredentialsOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::GetArtifactRepositoryCredentialsRequest&, const GetArtifactRepositoryCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetArtifactRepositoryCredentialsAsyncHandler;
			typedef Outcome<Error, Model::GetServiceResult> GetServiceOutcome;
			typedef std::future<GetServiceOutcome> GetServiceOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::GetServiceRequest&, const GetServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceAsyncHandler;
			typedef Outcome<Error, Model::GetServiceEstimateCostResult> GetServiceEstimateCostOutcome;
			typedef std::future<GetServiceEstimateCostOutcome> GetServiceEstimateCostOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::GetServiceEstimateCostRequest&, const GetServiceEstimateCostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceEstimateCostAsyncHandler;
			typedef Outcome<Error, Model::GetServiceInstanceResult> GetServiceInstanceOutcome;
			typedef std::future<GetServiceInstanceOutcome> GetServiceInstanceOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::GetServiceInstanceRequest&, const GetServiceInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetUploadCredentialsResult> GetUploadCredentialsOutcome;
			typedef std::future<GetUploadCredentialsOutcome> GetUploadCredentialsOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::GetUploadCredentialsRequest&, const GetUploadCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUploadCredentialsAsyncHandler;
			typedef Outcome<Error, Model::ListArtifactVersionsResult> ListArtifactVersionsOutcome;
			typedef std::future<ListArtifactVersionsOutcome> ListArtifactVersionsOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::ListArtifactVersionsRequest&, const ListArtifactVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListArtifactVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListArtifactsResult> ListArtifactsOutcome;
			typedef std::future<ListArtifactsOutcome> ListArtifactsOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::ListArtifactsRequest&, const ListArtifactsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListArtifactsAsyncHandler;
			typedef Outcome<Error, Model::ListServiceInstancesResult> ListServiceInstancesOutcome;
			typedef std::future<ListServiceInstancesOutcome> ListServiceInstancesOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::ListServiceInstancesRequest&, const ListServiceInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListServiceUsagesResult> ListServiceUsagesOutcome;
			typedef std::future<ListServiceUsagesOutcome> ListServiceUsagesOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::ListServiceUsagesRequest&, const ListServiceUsagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceUsagesAsyncHandler;
			typedef Outcome<Error, Model::ListServicesResult> ListServicesOutcome;
			typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::ListServicesRequest&, const ListServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServicesAsyncHandler;
			typedef Outcome<Error, Model::ReleaseArtifactResult> ReleaseArtifactOutcome;
			typedef std::future<ReleaseArtifactOutcome> ReleaseArtifactOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::ReleaseArtifactRequest&, const ReleaseArtifactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseArtifactAsyncHandler;
			typedef Outcome<Error, Model::UpdateArtifactResult> UpdateArtifactOutcome;
			typedef std::future<UpdateArtifactOutcome> UpdateArtifactOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::UpdateArtifactRequest&, const UpdateArtifactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateArtifactAsyncHandler;
			typedef Outcome<Error, Model::UpdateServiceResult> UpdateServiceOutcome;
			typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
			typedef std::function<void(const ComputeNestSupplierClient*, const Model::UpdateServiceRequest&, const UpdateServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceAsyncHandler;

			ComputeNestSupplierClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ComputeNestSupplierClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ComputeNestSupplierClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ComputeNestSupplierClient();
			CreateArtifactOutcome createArtifact(const Model::CreateArtifactRequest &request)const;
			void createArtifactAsync(const Model::CreateArtifactRequest& request, const CreateArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateArtifactOutcomeCallable createArtifactCallable(const Model::CreateArtifactRequest& request) const;
			CreateServiceOutcome createService(const Model::CreateServiceRequest &request)const;
			void createServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceOutcomeCallable createServiceCallable(const Model::CreateServiceRequest& request) const;
			DeleteArtifactOutcome deleteArtifact(const Model::DeleteArtifactRequest &request)const;
			void deleteArtifactAsync(const Model::DeleteArtifactRequest& request, const DeleteArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteArtifactOutcomeCallable deleteArtifactCallable(const Model::DeleteArtifactRequest& request) const;
			DeleteServiceOutcome deleteService(const Model::DeleteServiceRequest &request)const;
			void deleteServiceAsync(const Model::DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceOutcomeCallable deleteServiceCallable(const Model::DeleteServiceRequest& request) const;
			GetArtifactOutcome getArtifact(const Model::GetArtifactRequest &request)const;
			void getArtifactAsync(const Model::GetArtifactRequest& request, const GetArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetArtifactOutcomeCallable getArtifactCallable(const Model::GetArtifactRequest& request) const;
			GetArtifactRepositoryCredentialsOutcome getArtifactRepositoryCredentials(const Model::GetArtifactRepositoryCredentialsRequest &request)const;
			void getArtifactRepositoryCredentialsAsync(const Model::GetArtifactRepositoryCredentialsRequest& request, const GetArtifactRepositoryCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetArtifactRepositoryCredentialsOutcomeCallable getArtifactRepositoryCredentialsCallable(const Model::GetArtifactRepositoryCredentialsRequest& request) const;
			GetServiceOutcome getService(const Model::GetServiceRequest &request)const;
			void getServiceAsync(const Model::GetServiceRequest& request, const GetServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceOutcomeCallable getServiceCallable(const Model::GetServiceRequest& request) const;
			GetServiceEstimateCostOutcome getServiceEstimateCost(const Model::GetServiceEstimateCostRequest &request)const;
			void getServiceEstimateCostAsync(const Model::GetServiceEstimateCostRequest& request, const GetServiceEstimateCostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceEstimateCostOutcomeCallable getServiceEstimateCostCallable(const Model::GetServiceEstimateCostRequest& request) const;
			GetServiceInstanceOutcome getServiceInstance(const Model::GetServiceInstanceRequest &request)const;
			void getServiceInstanceAsync(const Model::GetServiceInstanceRequest& request, const GetServiceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceInstanceOutcomeCallable getServiceInstanceCallable(const Model::GetServiceInstanceRequest& request) const;
			GetUploadCredentialsOutcome getUploadCredentials(const Model::GetUploadCredentialsRequest &request)const;
			void getUploadCredentialsAsync(const Model::GetUploadCredentialsRequest& request, const GetUploadCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUploadCredentialsOutcomeCallable getUploadCredentialsCallable(const Model::GetUploadCredentialsRequest& request) const;
			ListArtifactVersionsOutcome listArtifactVersions(const Model::ListArtifactVersionsRequest &request)const;
			void listArtifactVersionsAsync(const Model::ListArtifactVersionsRequest& request, const ListArtifactVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListArtifactVersionsOutcomeCallable listArtifactVersionsCallable(const Model::ListArtifactVersionsRequest& request) const;
			ListArtifactsOutcome listArtifacts(const Model::ListArtifactsRequest &request)const;
			void listArtifactsAsync(const Model::ListArtifactsRequest& request, const ListArtifactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListArtifactsOutcomeCallable listArtifactsCallable(const Model::ListArtifactsRequest& request) const;
			ListServiceInstancesOutcome listServiceInstances(const Model::ListServiceInstancesRequest &request)const;
			void listServiceInstancesAsync(const Model::ListServiceInstancesRequest& request, const ListServiceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceInstancesOutcomeCallable listServiceInstancesCallable(const Model::ListServiceInstancesRequest& request) const;
			ListServiceUsagesOutcome listServiceUsages(const Model::ListServiceUsagesRequest &request)const;
			void listServiceUsagesAsync(const Model::ListServiceUsagesRequest& request, const ListServiceUsagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceUsagesOutcomeCallable listServiceUsagesCallable(const Model::ListServiceUsagesRequest& request) const;
			ListServicesOutcome listServices(const Model::ListServicesRequest &request)const;
			void listServicesAsync(const Model::ListServicesRequest& request, const ListServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServicesOutcomeCallable listServicesCallable(const Model::ListServicesRequest& request) const;
			ReleaseArtifactOutcome releaseArtifact(const Model::ReleaseArtifactRequest &request)const;
			void releaseArtifactAsync(const Model::ReleaseArtifactRequest& request, const ReleaseArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseArtifactOutcomeCallable releaseArtifactCallable(const Model::ReleaseArtifactRequest& request) const;
			UpdateArtifactOutcome updateArtifact(const Model::UpdateArtifactRequest &request)const;
			void updateArtifactAsync(const Model::UpdateArtifactRequest& request, const UpdateArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateArtifactOutcomeCallable updateArtifactCallable(const Model::UpdateArtifactRequest& request) const;
			UpdateServiceOutcome updateService(const Model::UpdateServiceRequest &request)const;
			void updateServiceAsync(const Model::UpdateServiceRequest& request, const UpdateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServiceOutcomeCallable updateServiceCallable(const Model::UpdateServiceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_COMPUTENESTSUPPLIER_COMPUTENESTSUPPLIERCLIENT_H_
