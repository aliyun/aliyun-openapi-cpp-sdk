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

#ifndef ALIBABACLOUD_CAS_CASCLIENT_H_
#define ALIBABACLOUD_CAS_CASCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CasExport.h"
#include "model/CreateClientCertificateRequest.h"
#include "model/CreateClientCertificateResult.h"
#include "model/CreateClientCertificateWithCsrRequest.h"
#include "model/CreateClientCertificateWithCsrResult.h"
#include "model/CreateCustomCertificateRequest.h"
#include "model/CreateCustomCertificateResult.h"
#include "model/CreateExternalCACertificateRequest.h"
#include "model/CreateExternalCACertificateResult.h"
#include "model/CreateRevokeClientCertificateRequest.h"
#include "model/CreateRevokeClientCertificateResult.h"
#include "model/CreateRootCACertificateRequest.h"
#include "model/CreateRootCACertificateResult.h"
#include "model/CreateServerCertificateRequest.h"
#include "model/CreateServerCertificateResult.h"
#include "model/CreateServerCertificateWithCsrRequest.h"
#include "model/CreateServerCertificateWithCsrResult.h"
#include "model/CreateSubCACertificateRequest.h"
#include "model/CreateSubCACertificateResult.h"
#include "model/DeleteClientCertificateRequest.h"
#include "model/DeleteClientCertificateResult.h"
#include "model/DescribeCACertificateRequest.h"
#include "model/DescribeCACertificateResult.h"
#include "model/DescribeCACertificateCountRequest.h"
#include "model/DescribeCACertificateCountResult.h"
#include "model/DescribeCACertificateListRequest.h"
#include "model/DescribeCACertificateListResult.h"
#include "model/DescribeCertificatePrivateKeyRequest.h"
#include "model/DescribeCertificatePrivateKeyResult.h"
#include "model/DescribeClientCertificateRequest.h"
#include "model/DescribeClientCertificateResult.h"
#include "model/DescribeClientCertificateStatusRequest.h"
#include "model/DescribeClientCertificateStatusResult.h"
#include "model/GetCAInstanceStatusRequest.h"
#include "model/GetCAInstanceStatusResult.h"
#include "model/ListCertRequest.h"
#include "model/ListCertResult.h"
#include "model/ListClientCertificateRequest.h"
#include "model/ListClientCertificateResult.h"
#include "model/ListPcaCaCertificateRequest.h"
#include "model/ListPcaCaCertificateResult.h"
#include "model/ListRevokeCertificateRequest.h"
#include "model/ListRevokeCertificateResult.h"
#include "model/UpdateCACertificateStatusRequest.h"
#include "model/UpdateCACertificateStatusResult.h"
#include "model/UploadPcaCertToCasRequest.h"
#include "model/UploadPcaCertToCasResult.h"


namespace AlibabaCloud
{
	namespace Cas
	{
		class ALIBABACLOUD_CAS_EXPORT CasClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateClientCertificateResult> CreateClientCertificateOutcome;
			typedef std::future<CreateClientCertificateOutcome> CreateClientCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateClientCertificateRequest&, const CreateClientCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClientCertificateAsyncHandler;
			typedef Outcome<Error, Model::CreateClientCertificateWithCsrResult> CreateClientCertificateWithCsrOutcome;
			typedef std::future<CreateClientCertificateWithCsrOutcome> CreateClientCertificateWithCsrOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateClientCertificateWithCsrRequest&, const CreateClientCertificateWithCsrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClientCertificateWithCsrAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomCertificateResult> CreateCustomCertificateOutcome;
			typedef std::future<CreateCustomCertificateOutcome> CreateCustomCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateCustomCertificateRequest&, const CreateCustomCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomCertificateAsyncHandler;
			typedef Outcome<Error, Model::CreateExternalCACertificateResult> CreateExternalCACertificateOutcome;
			typedef std::future<CreateExternalCACertificateOutcome> CreateExternalCACertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateExternalCACertificateRequest&, const CreateExternalCACertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateExternalCACertificateAsyncHandler;
			typedef Outcome<Error, Model::CreateRevokeClientCertificateResult> CreateRevokeClientCertificateOutcome;
			typedef std::future<CreateRevokeClientCertificateOutcome> CreateRevokeClientCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateRevokeClientCertificateRequest&, const CreateRevokeClientCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRevokeClientCertificateAsyncHandler;
			typedef Outcome<Error, Model::CreateRootCACertificateResult> CreateRootCACertificateOutcome;
			typedef std::future<CreateRootCACertificateOutcome> CreateRootCACertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateRootCACertificateRequest&, const CreateRootCACertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRootCACertificateAsyncHandler;
			typedef Outcome<Error, Model::CreateServerCertificateResult> CreateServerCertificateOutcome;
			typedef std::future<CreateServerCertificateOutcome> CreateServerCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateServerCertificateRequest&, const CreateServerCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServerCertificateAsyncHandler;
			typedef Outcome<Error, Model::CreateServerCertificateWithCsrResult> CreateServerCertificateWithCsrOutcome;
			typedef std::future<CreateServerCertificateWithCsrOutcome> CreateServerCertificateWithCsrOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateServerCertificateWithCsrRequest&, const CreateServerCertificateWithCsrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServerCertificateWithCsrAsyncHandler;
			typedef Outcome<Error, Model::CreateSubCACertificateResult> CreateSubCACertificateOutcome;
			typedef std::future<CreateSubCACertificateOutcome> CreateSubCACertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateSubCACertificateRequest&, const CreateSubCACertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubCACertificateAsyncHandler;
			typedef Outcome<Error, Model::DeleteClientCertificateResult> DeleteClientCertificateOutcome;
			typedef std::future<DeleteClientCertificateOutcome> DeleteClientCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DeleteClientCertificateRequest&, const DeleteClientCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClientCertificateAsyncHandler;
			typedef Outcome<Error, Model::DescribeCACertificateResult> DescribeCACertificateOutcome;
			typedef std::future<DescribeCACertificateOutcome> DescribeCACertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeCACertificateRequest&, const DescribeCACertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCACertificateAsyncHandler;
			typedef Outcome<Error, Model::DescribeCACertificateCountResult> DescribeCACertificateCountOutcome;
			typedef std::future<DescribeCACertificateCountOutcome> DescribeCACertificateCountOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeCACertificateCountRequest&, const DescribeCACertificateCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCACertificateCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeCACertificateListResult> DescribeCACertificateListOutcome;
			typedef std::future<DescribeCACertificateListOutcome> DescribeCACertificateListOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeCACertificateListRequest&, const DescribeCACertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCACertificateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCertificatePrivateKeyResult> DescribeCertificatePrivateKeyOutcome;
			typedef std::future<DescribeCertificatePrivateKeyOutcome> DescribeCertificatePrivateKeyOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeCertificatePrivateKeyRequest&, const DescribeCertificatePrivateKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificatePrivateKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeClientCertificateResult> DescribeClientCertificateOutcome;
			typedef std::future<DescribeClientCertificateOutcome> DescribeClientCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeClientCertificateRequest&, const DescribeClientCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientCertificateAsyncHandler;
			typedef Outcome<Error, Model::DescribeClientCertificateStatusResult> DescribeClientCertificateStatusOutcome;
			typedef std::future<DescribeClientCertificateStatusOutcome> DescribeClientCertificateStatusOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeClientCertificateStatusRequest&, const DescribeClientCertificateStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientCertificateStatusAsyncHandler;
			typedef Outcome<Error, Model::GetCAInstanceStatusResult> GetCAInstanceStatusOutcome;
			typedef std::future<GetCAInstanceStatusOutcome> GetCAInstanceStatusOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::GetCAInstanceStatusRequest&, const GetCAInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCAInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::ListCertResult> ListCertOutcome;
			typedef std::future<ListCertOutcome> ListCertOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::ListCertRequest&, const ListCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCertAsyncHandler;
			typedef Outcome<Error, Model::ListClientCertificateResult> ListClientCertificateOutcome;
			typedef std::future<ListClientCertificateOutcome> ListClientCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::ListClientCertificateRequest&, const ListClientCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClientCertificateAsyncHandler;
			typedef Outcome<Error, Model::ListPcaCaCertificateResult> ListPcaCaCertificateOutcome;
			typedef std::future<ListPcaCaCertificateOutcome> ListPcaCaCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::ListPcaCaCertificateRequest&, const ListPcaCaCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPcaCaCertificateAsyncHandler;
			typedef Outcome<Error, Model::ListRevokeCertificateResult> ListRevokeCertificateOutcome;
			typedef std::future<ListRevokeCertificateOutcome> ListRevokeCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::ListRevokeCertificateRequest&, const ListRevokeCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRevokeCertificateAsyncHandler;
			typedef Outcome<Error, Model::UpdateCACertificateStatusResult> UpdateCACertificateStatusOutcome;
			typedef std::future<UpdateCACertificateStatusOutcome> UpdateCACertificateStatusOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::UpdateCACertificateStatusRequest&, const UpdateCACertificateStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCACertificateStatusAsyncHandler;
			typedef Outcome<Error, Model::UploadPcaCertToCasResult> UploadPcaCertToCasOutcome;
			typedef std::future<UploadPcaCertToCasOutcome> UploadPcaCertToCasOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::UploadPcaCertToCasRequest&, const UploadPcaCertToCasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadPcaCertToCasAsyncHandler;

			CasClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CasClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CasClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CasClient();
			CreateClientCertificateOutcome createClientCertificate(const Model::CreateClientCertificateRequest &request)const;
			void createClientCertificateAsync(const Model::CreateClientCertificateRequest& request, const CreateClientCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClientCertificateOutcomeCallable createClientCertificateCallable(const Model::CreateClientCertificateRequest& request) const;
			CreateClientCertificateWithCsrOutcome createClientCertificateWithCsr(const Model::CreateClientCertificateWithCsrRequest &request)const;
			void createClientCertificateWithCsrAsync(const Model::CreateClientCertificateWithCsrRequest& request, const CreateClientCertificateWithCsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClientCertificateWithCsrOutcomeCallable createClientCertificateWithCsrCallable(const Model::CreateClientCertificateWithCsrRequest& request) const;
			CreateCustomCertificateOutcome createCustomCertificate(const Model::CreateCustomCertificateRequest &request)const;
			void createCustomCertificateAsync(const Model::CreateCustomCertificateRequest& request, const CreateCustomCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomCertificateOutcomeCallable createCustomCertificateCallable(const Model::CreateCustomCertificateRequest& request) const;
			CreateExternalCACertificateOutcome createExternalCACertificate(const Model::CreateExternalCACertificateRequest &request)const;
			void createExternalCACertificateAsync(const Model::CreateExternalCACertificateRequest& request, const CreateExternalCACertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateExternalCACertificateOutcomeCallable createExternalCACertificateCallable(const Model::CreateExternalCACertificateRequest& request) const;
			CreateRevokeClientCertificateOutcome createRevokeClientCertificate(const Model::CreateRevokeClientCertificateRequest &request)const;
			void createRevokeClientCertificateAsync(const Model::CreateRevokeClientCertificateRequest& request, const CreateRevokeClientCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRevokeClientCertificateOutcomeCallable createRevokeClientCertificateCallable(const Model::CreateRevokeClientCertificateRequest& request) const;
			CreateRootCACertificateOutcome createRootCACertificate(const Model::CreateRootCACertificateRequest &request)const;
			void createRootCACertificateAsync(const Model::CreateRootCACertificateRequest& request, const CreateRootCACertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRootCACertificateOutcomeCallable createRootCACertificateCallable(const Model::CreateRootCACertificateRequest& request) const;
			CreateServerCertificateOutcome createServerCertificate(const Model::CreateServerCertificateRequest &request)const;
			void createServerCertificateAsync(const Model::CreateServerCertificateRequest& request, const CreateServerCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServerCertificateOutcomeCallable createServerCertificateCallable(const Model::CreateServerCertificateRequest& request) const;
			CreateServerCertificateWithCsrOutcome createServerCertificateWithCsr(const Model::CreateServerCertificateWithCsrRequest &request)const;
			void createServerCertificateWithCsrAsync(const Model::CreateServerCertificateWithCsrRequest& request, const CreateServerCertificateWithCsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServerCertificateWithCsrOutcomeCallable createServerCertificateWithCsrCallable(const Model::CreateServerCertificateWithCsrRequest& request) const;
			CreateSubCACertificateOutcome createSubCACertificate(const Model::CreateSubCACertificateRequest &request)const;
			void createSubCACertificateAsync(const Model::CreateSubCACertificateRequest& request, const CreateSubCACertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSubCACertificateOutcomeCallable createSubCACertificateCallable(const Model::CreateSubCACertificateRequest& request) const;
			DeleteClientCertificateOutcome deleteClientCertificate(const Model::DeleteClientCertificateRequest &request)const;
			void deleteClientCertificateAsync(const Model::DeleteClientCertificateRequest& request, const DeleteClientCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClientCertificateOutcomeCallable deleteClientCertificateCallable(const Model::DeleteClientCertificateRequest& request) const;
			DescribeCACertificateOutcome describeCACertificate(const Model::DescribeCACertificateRequest &request)const;
			void describeCACertificateAsync(const Model::DescribeCACertificateRequest& request, const DescribeCACertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCACertificateOutcomeCallable describeCACertificateCallable(const Model::DescribeCACertificateRequest& request) const;
			DescribeCACertificateCountOutcome describeCACertificateCount(const Model::DescribeCACertificateCountRequest &request)const;
			void describeCACertificateCountAsync(const Model::DescribeCACertificateCountRequest& request, const DescribeCACertificateCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCACertificateCountOutcomeCallable describeCACertificateCountCallable(const Model::DescribeCACertificateCountRequest& request) const;
			DescribeCACertificateListOutcome describeCACertificateList(const Model::DescribeCACertificateListRequest &request)const;
			void describeCACertificateListAsync(const Model::DescribeCACertificateListRequest& request, const DescribeCACertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCACertificateListOutcomeCallable describeCACertificateListCallable(const Model::DescribeCACertificateListRequest& request) const;
			DescribeCertificatePrivateKeyOutcome describeCertificatePrivateKey(const Model::DescribeCertificatePrivateKeyRequest &request)const;
			void describeCertificatePrivateKeyAsync(const Model::DescribeCertificatePrivateKeyRequest& request, const DescribeCertificatePrivateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCertificatePrivateKeyOutcomeCallable describeCertificatePrivateKeyCallable(const Model::DescribeCertificatePrivateKeyRequest& request) const;
			DescribeClientCertificateOutcome describeClientCertificate(const Model::DescribeClientCertificateRequest &request)const;
			void describeClientCertificateAsync(const Model::DescribeClientCertificateRequest& request, const DescribeClientCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClientCertificateOutcomeCallable describeClientCertificateCallable(const Model::DescribeClientCertificateRequest& request) const;
			DescribeClientCertificateStatusOutcome describeClientCertificateStatus(const Model::DescribeClientCertificateStatusRequest &request)const;
			void describeClientCertificateStatusAsync(const Model::DescribeClientCertificateStatusRequest& request, const DescribeClientCertificateStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClientCertificateStatusOutcomeCallable describeClientCertificateStatusCallable(const Model::DescribeClientCertificateStatusRequest& request) const;
			GetCAInstanceStatusOutcome getCAInstanceStatus(const Model::GetCAInstanceStatusRequest &request)const;
			void getCAInstanceStatusAsync(const Model::GetCAInstanceStatusRequest& request, const GetCAInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCAInstanceStatusOutcomeCallable getCAInstanceStatusCallable(const Model::GetCAInstanceStatusRequest& request) const;
			ListCertOutcome listCert(const Model::ListCertRequest &request)const;
			void listCertAsync(const Model::ListCertRequest& request, const ListCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCertOutcomeCallable listCertCallable(const Model::ListCertRequest& request) const;
			ListClientCertificateOutcome listClientCertificate(const Model::ListClientCertificateRequest &request)const;
			void listClientCertificateAsync(const Model::ListClientCertificateRequest& request, const ListClientCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClientCertificateOutcomeCallable listClientCertificateCallable(const Model::ListClientCertificateRequest& request) const;
			ListPcaCaCertificateOutcome listPcaCaCertificate(const Model::ListPcaCaCertificateRequest &request)const;
			void listPcaCaCertificateAsync(const Model::ListPcaCaCertificateRequest& request, const ListPcaCaCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPcaCaCertificateOutcomeCallable listPcaCaCertificateCallable(const Model::ListPcaCaCertificateRequest& request) const;
			ListRevokeCertificateOutcome listRevokeCertificate(const Model::ListRevokeCertificateRequest &request)const;
			void listRevokeCertificateAsync(const Model::ListRevokeCertificateRequest& request, const ListRevokeCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRevokeCertificateOutcomeCallable listRevokeCertificateCallable(const Model::ListRevokeCertificateRequest& request) const;
			UpdateCACertificateStatusOutcome updateCACertificateStatus(const Model::UpdateCACertificateStatusRequest &request)const;
			void updateCACertificateStatusAsync(const Model::UpdateCACertificateStatusRequest& request, const UpdateCACertificateStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCACertificateStatusOutcomeCallable updateCACertificateStatusCallable(const Model::UpdateCACertificateStatusRequest& request) const;
			UploadPcaCertToCasOutcome uploadPcaCertToCas(const Model::UploadPcaCertToCasRequest &request)const;
			void uploadPcaCertToCasAsync(const Model::UploadPcaCertToCasRequest& request, const UploadPcaCertToCasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadPcaCertToCasOutcomeCallable uploadPcaCertToCasCallable(const Model::UploadPcaCertToCasRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CAS_CASCLIENT_H_
