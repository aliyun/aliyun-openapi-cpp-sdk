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
#include "model/CancelCertificateForPackageRequestRequest.h"
#include "model/CancelCertificateForPackageRequestResult.h"
#include "model/CancelOrderRequestRequest.h"
#include "model/CancelOrderRequestResult.h"
#include "model/CreateCertificateForPackageRequestRequest.h"
#include "model/CreateCertificateForPackageRequestResult.h"
#include "model/CreateCertificateRequestRequest.h"
#include "model/CreateCertificateRequestResult.h"
#include "model/CreateCertificateWithCsrRequestRequest.h"
#include "model/CreateCertificateWithCsrRequestResult.h"
#include "model/CreateWHClientCertificateRequest.h"
#include "model/CreateWHClientCertificateResult.h"
#include "model/DecryptRequest.h"
#include "model/DecryptResult.h"
#include "model/DeleteCertificateRequestRequest.h"
#include "model/DeleteCertificateRequestResult.h"
#include "model/DeletePCACertRequest.h"
#include "model/DeletePCACertResult.h"
#include "model/DeleteUserCertificateRequest.h"
#include "model/DeleteUserCertificateResult.h"
#include "model/DescribeCertificateStateRequest.h"
#include "model/DescribeCertificateStateResult.h"
#include "model/DescribePackageStateRequest.h"
#include "model/DescribePackageStateResult.h"
#include "model/EncryptRequest.h"
#include "model/EncryptResult.h"
#include "model/GetCertWarehouseQuotaRequest.h"
#include "model/GetCertWarehouseQuotaResult.h"
#include "model/GetUserCertificateDetailRequest.h"
#include "model/GetUserCertificateDetailResult.h"
#include "model/ListCertRequest.h"
#include "model/ListCertResult.h"
#include "model/ListCertWarehouseRequest.h"
#include "model/ListCertWarehouseResult.h"
#include "model/ListUserCertificateOrderRequest.h"
#include "model/ListUserCertificateOrderResult.h"
#include "model/RenewCertificateOrderForPackageRequestRequest.h"
#include "model/RenewCertificateOrderForPackageRequestResult.h"
#include "model/RevokeWHClientCertificateRequest.h"
#include "model/RevokeWHClientCertificateResult.h"
#include "model/SignRequest.h"
#include "model/SignResult.h"
#include "model/UploadPCACertRequest.h"
#include "model/UploadPCACertResult.h"
#include "model/UploadUserCertificateRequest.h"
#include "model/UploadUserCertificateResult.h"
#include "model/VerifyRequest.h"
#include "model/VerifyResult.h"


namespace AlibabaCloud
{
	namespace Cas
	{
		class ALIBABACLOUD_CAS_EXPORT CasClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CancelCertificateForPackageRequestResult> CancelCertificateForPackageRequestOutcome;
			typedef std::future<CancelCertificateForPackageRequestOutcome> CancelCertificateForPackageRequestOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CancelCertificateForPackageRequestRequest&, const CancelCertificateForPackageRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelCertificateForPackageRequestAsyncHandler;
			typedef Outcome<Error, Model::CancelOrderRequestResult> CancelOrderRequestOutcome;
			typedef std::future<CancelOrderRequestOutcome> CancelOrderRequestOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CancelOrderRequestRequest&, const CancelOrderRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelOrderRequestAsyncHandler;
			typedef Outcome<Error, Model::CreateCertificateForPackageRequestResult> CreateCertificateForPackageRequestOutcome;
			typedef std::future<CreateCertificateForPackageRequestOutcome> CreateCertificateForPackageRequestOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateCertificateForPackageRequestRequest&, const CreateCertificateForPackageRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateForPackageRequestAsyncHandler;
			typedef Outcome<Error, Model::CreateCertificateRequestResult> CreateCertificateRequestOutcome;
			typedef std::future<CreateCertificateRequestOutcome> CreateCertificateRequestOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateCertificateRequestRequest&, const CreateCertificateRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateRequestAsyncHandler;
			typedef Outcome<Error, Model::CreateCertificateWithCsrRequestResult> CreateCertificateWithCsrRequestOutcome;
			typedef std::future<CreateCertificateWithCsrRequestOutcome> CreateCertificateWithCsrRequestOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateCertificateWithCsrRequestRequest&, const CreateCertificateWithCsrRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateWithCsrRequestAsyncHandler;
			typedef Outcome<Error, Model::CreateWHClientCertificateResult> CreateWHClientCertificateOutcome;
			typedef std::future<CreateWHClientCertificateOutcome> CreateWHClientCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateWHClientCertificateRequest&, const CreateWHClientCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWHClientCertificateAsyncHandler;
			typedef Outcome<Error, Model::DecryptResult> DecryptOutcome;
			typedef std::future<DecryptOutcome> DecryptOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DecryptRequest&, const DecryptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DecryptAsyncHandler;
			typedef Outcome<Error, Model::DeleteCertificateRequestResult> DeleteCertificateRequestOutcome;
			typedef std::future<DeleteCertificateRequestOutcome> DeleteCertificateRequestOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DeleteCertificateRequestRequest&, const DeleteCertificateRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCertificateRequestAsyncHandler;
			typedef Outcome<Error, Model::DeletePCACertResult> DeletePCACertOutcome;
			typedef std::future<DeletePCACertOutcome> DeletePCACertOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DeletePCACertRequest&, const DeletePCACertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePCACertAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserCertificateResult> DeleteUserCertificateOutcome;
			typedef std::future<DeleteUserCertificateOutcome> DeleteUserCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DeleteUserCertificateRequest&, const DeleteUserCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserCertificateAsyncHandler;
			typedef Outcome<Error, Model::DescribeCertificateStateResult> DescribeCertificateStateOutcome;
			typedef std::future<DescribeCertificateStateOutcome> DescribeCertificateStateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeCertificateStateRequest&, const DescribeCertificateStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateStateAsyncHandler;
			typedef Outcome<Error, Model::DescribePackageStateResult> DescribePackageStateOutcome;
			typedef std::future<DescribePackageStateOutcome> DescribePackageStateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribePackageStateRequest&, const DescribePackageStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackageStateAsyncHandler;
			typedef Outcome<Error, Model::EncryptResult> EncryptOutcome;
			typedef std::future<EncryptOutcome> EncryptOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::EncryptRequest&, const EncryptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EncryptAsyncHandler;
			typedef Outcome<Error, Model::GetCertWarehouseQuotaResult> GetCertWarehouseQuotaOutcome;
			typedef std::future<GetCertWarehouseQuotaOutcome> GetCertWarehouseQuotaOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::GetCertWarehouseQuotaRequest&, const GetCertWarehouseQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCertWarehouseQuotaAsyncHandler;
			typedef Outcome<Error, Model::GetUserCertificateDetailResult> GetUserCertificateDetailOutcome;
			typedef std::future<GetUserCertificateDetailOutcome> GetUserCertificateDetailOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::GetUserCertificateDetailRequest&, const GetUserCertificateDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserCertificateDetailAsyncHandler;
			typedef Outcome<Error, Model::ListCertResult> ListCertOutcome;
			typedef std::future<ListCertOutcome> ListCertOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::ListCertRequest&, const ListCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCertAsyncHandler;
			typedef Outcome<Error, Model::ListCertWarehouseResult> ListCertWarehouseOutcome;
			typedef std::future<ListCertWarehouseOutcome> ListCertWarehouseOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::ListCertWarehouseRequest&, const ListCertWarehouseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCertWarehouseAsyncHandler;
			typedef Outcome<Error, Model::ListUserCertificateOrderResult> ListUserCertificateOrderOutcome;
			typedef std::future<ListUserCertificateOrderOutcome> ListUserCertificateOrderOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::ListUserCertificateOrderRequest&, const ListUserCertificateOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserCertificateOrderAsyncHandler;
			typedef Outcome<Error, Model::RenewCertificateOrderForPackageRequestResult> RenewCertificateOrderForPackageRequestOutcome;
			typedef std::future<RenewCertificateOrderForPackageRequestOutcome> RenewCertificateOrderForPackageRequestOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::RenewCertificateOrderForPackageRequestRequest&, const RenewCertificateOrderForPackageRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewCertificateOrderForPackageRequestAsyncHandler;
			typedef Outcome<Error, Model::RevokeWHClientCertificateResult> RevokeWHClientCertificateOutcome;
			typedef std::future<RevokeWHClientCertificateOutcome> RevokeWHClientCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::RevokeWHClientCertificateRequest&, const RevokeWHClientCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeWHClientCertificateAsyncHandler;
			typedef Outcome<Error, Model::SignResult> SignOutcome;
			typedef std::future<SignOutcome> SignOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::SignRequest&, const SignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SignAsyncHandler;
			typedef Outcome<Error, Model::UploadPCACertResult> UploadPCACertOutcome;
			typedef std::future<UploadPCACertOutcome> UploadPCACertOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::UploadPCACertRequest&, const UploadPCACertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadPCACertAsyncHandler;
			typedef Outcome<Error, Model::UploadUserCertificateResult> UploadUserCertificateOutcome;
			typedef std::future<UploadUserCertificateOutcome> UploadUserCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::UploadUserCertificateRequest&, const UploadUserCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadUserCertificateAsyncHandler;
			typedef Outcome<Error, Model::VerifyResult> VerifyOutcome;
			typedef std::future<VerifyOutcome> VerifyOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::VerifyRequest&, const VerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyAsyncHandler;

			CasClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CasClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CasClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CasClient();
			CancelCertificateForPackageRequestOutcome cancelCertificateForPackageRequest(const Model::CancelCertificateForPackageRequestRequest &request)const;
			void cancelCertificateForPackageRequestAsync(const Model::CancelCertificateForPackageRequestRequest& request, const CancelCertificateForPackageRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelCertificateForPackageRequestOutcomeCallable cancelCertificateForPackageRequestCallable(const Model::CancelCertificateForPackageRequestRequest& request) const;
			CancelOrderRequestOutcome cancelOrderRequest(const Model::CancelOrderRequestRequest &request)const;
			void cancelOrderRequestAsync(const Model::CancelOrderRequestRequest& request, const CancelOrderRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelOrderRequestOutcomeCallable cancelOrderRequestCallable(const Model::CancelOrderRequestRequest& request) const;
			CreateCertificateForPackageRequestOutcome createCertificateForPackageRequest(const Model::CreateCertificateForPackageRequestRequest &request)const;
			void createCertificateForPackageRequestAsync(const Model::CreateCertificateForPackageRequestRequest& request, const CreateCertificateForPackageRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCertificateForPackageRequestOutcomeCallable createCertificateForPackageRequestCallable(const Model::CreateCertificateForPackageRequestRequest& request) const;
			CreateCertificateRequestOutcome createCertificateRequest(const Model::CreateCertificateRequestRequest &request)const;
			void createCertificateRequestAsync(const Model::CreateCertificateRequestRequest& request, const CreateCertificateRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCertificateRequestOutcomeCallable createCertificateRequestCallable(const Model::CreateCertificateRequestRequest& request) const;
			CreateCertificateWithCsrRequestOutcome createCertificateWithCsrRequest(const Model::CreateCertificateWithCsrRequestRequest &request)const;
			void createCertificateWithCsrRequestAsync(const Model::CreateCertificateWithCsrRequestRequest& request, const CreateCertificateWithCsrRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCertificateWithCsrRequestOutcomeCallable createCertificateWithCsrRequestCallable(const Model::CreateCertificateWithCsrRequestRequest& request) const;
			CreateWHClientCertificateOutcome createWHClientCertificate(const Model::CreateWHClientCertificateRequest &request)const;
			void createWHClientCertificateAsync(const Model::CreateWHClientCertificateRequest& request, const CreateWHClientCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWHClientCertificateOutcomeCallable createWHClientCertificateCallable(const Model::CreateWHClientCertificateRequest& request) const;
			DecryptOutcome decrypt(const Model::DecryptRequest &request)const;
			void decryptAsync(const Model::DecryptRequest& request, const DecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DecryptOutcomeCallable decryptCallable(const Model::DecryptRequest& request) const;
			DeleteCertificateRequestOutcome deleteCertificateRequest(const Model::DeleteCertificateRequestRequest &request)const;
			void deleteCertificateRequestAsync(const Model::DeleteCertificateRequestRequest& request, const DeleteCertificateRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCertificateRequestOutcomeCallable deleteCertificateRequestCallable(const Model::DeleteCertificateRequestRequest& request) const;
			DeletePCACertOutcome deletePCACert(const Model::DeletePCACertRequest &request)const;
			void deletePCACertAsync(const Model::DeletePCACertRequest& request, const DeletePCACertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePCACertOutcomeCallable deletePCACertCallable(const Model::DeletePCACertRequest& request) const;
			DeleteUserCertificateOutcome deleteUserCertificate(const Model::DeleteUserCertificateRequest &request)const;
			void deleteUserCertificateAsync(const Model::DeleteUserCertificateRequest& request, const DeleteUserCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserCertificateOutcomeCallable deleteUserCertificateCallable(const Model::DeleteUserCertificateRequest& request) const;
			DescribeCertificateStateOutcome describeCertificateState(const Model::DescribeCertificateStateRequest &request)const;
			void describeCertificateStateAsync(const Model::DescribeCertificateStateRequest& request, const DescribeCertificateStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCertificateStateOutcomeCallable describeCertificateStateCallable(const Model::DescribeCertificateStateRequest& request) const;
			DescribePackageStateOutcome describePackageState(const Model::DescribePackageStateRequest &request)const;
			void describePackageStateAsync(const Model::DescribePackageStateRequest& request, const DescribePackageStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePackageStateOutcomeCallable describePackageStateCallable(const Model::DescribePackageStateRequest& request) const;
			EncryptOutcome encrypt(const Model::EncryptRequest &request)const;
			void encryptAsync(const Model::EncryptRequest& request, const EncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EncryptOutcomeCallable encryptCallable(const Model::EncryptRequest& request) const;
			GetCertWarehouseQuotaOutcome getCertWarehouseQuota(const Model::GetCertWarehouseQuotaRequest &request)const;
			void getCertWarehouseQuotaAsync(const Model::GetCertWarehouseQuotaRequest& request, const GetCertWarehouseQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCertWarehouseQuotaOutcomeCallable getCertWarehouseQuotaCallable(const Model::GetCertWarehouseQuotaRequest& request) const;
			GetUserCertificateDetailOutcome getUserCertificateDetail(const Model::GetUserCertificateDetailRequest &request)const;
			void getUserCertificateDetailAsync(const Model::GetUserCertificateDetailRequest& request, const GetUserCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserCertificateDetailOutcomeCallable getUserCertificateDetailCallable(const Model::GetUserCertificateDetailRequest& request) const;
			ListCertOutcome listCert(const Model::ListCertRequest &request)const;
			void listCertAsync(const Model::ListCertRequest& request, const ListCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCertOutcomeCallable listCertCallable(const Model::ListCertRequest& request) const;
			ListCertWarehouseOutcome listCertWarehouse(const Model::ListCertWarehouseRequest &request)const;
			void listCertWarehouseAsync(const Model::ListCertWarehouseRequest& request, const ListCertWarehouseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCertWarehouseOutcomeCallable listCertWarehouseCallable(const Model::ListCertWarehouseRequest& request) const;
			ListUserCertificateOrderOutcome listUserCertificateOrder(const Model::ListUserCertificateOrderRequest &request)const;
			void listUserCertificateOrderAsync(const Model::ListUserCertificateOrderRequest& request, const ListUserCertificateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserCertificateOrderOutcomeCallable listUserCertificateOrderCallable(const Model::ListUserCertificateOrderRequest& request) const;
			RenewCertificateOrderForPackageRequestOutcome renewCertificateOrderForPackageRequest(const Model::RenewCertificateOrderForPackageRequestRequest &request)const;
			void renewCertificateOrderForPackageRequestAsync(const Model::RenewCertificateOrderForPackageRequestRequest& request, const RenewCertificateOrderForPackageRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewCertificateOrderForPackageRequestOutcomeCallable renewCertificateOrderForPackageRequestCallable(const Model::RenewCertificateOrderForPackageRequestRequest& request) const;
			RevokeWHClientCertificateOutcome revokeWHClientCertificate(const Model::RevokeWHClientCertificateRequest &request)const;
			void revokeWHClientCertificateAsync(const Model::RevokeWHClientCertificateRequest& request, const RevokeWHClientCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeWHClientCertificateOutcomeCallable revokeWHClientCertificateCallable(const Model::RevokeWHClientCertificateRequest& request) const;
			SignOutcome sign(const Model::SignRequest &request)const;
			void signAsync(const Model::SignRequest& request, const SignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SignOutcomeCallable signCallable(const Model::SignRequest& request) const;
			UploadPCACertOutcome uploadPCACert(const Model::UploadPCACertRequest &request)const;
			void uploadPCACertAsync(const Model::UploadPCACertRequest& request, const UploadPCACertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadPCACertOutcomeCallable uploadPCACertCallable(const Model::UploadPCACertRequest& request) const;
			UploadUserCertificateOutcome uploadUserCertificate(const Model::UploadUserCertificateRequest &request)const;
			void uploadUserCertificateAsync(const Model::UploadUserCertificateRequest& request, const UploadUserCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadUserCertificateOutcomeCallable uploadUserCertificateCallable(const Model::UploadUserCertificateRequest& request) const;
			VerifyOutcome verify(const Model::VerifyRequest &request)const;
			void verifyAsync(const Model::VerifyRequest& request, const VerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyOutcomeCallable verifyCallable(const Model::VerifyRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CAS_CASCLIENT_H_
