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

#include <alibabacloud/cas/CasClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

namespace
{
	const std::string SERVICE_NAME = "cas";
}

CasClient::CasClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cas");
}

CasClient::CasClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cas");
}

CasClient::CasClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cas");
}

CasClient::~CasClient()
{}

CasClient::CancelCertificateForPackageRequestOutcome CasClient::cancelCertificateForPackageRequest(const CancelCertificateForPackageRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelCertificateForPackageRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelCertificateForPackageRequestOutcome(CancelCertificateForPackageRequestResult(outcome.result()));
	else
		return CancelCertificateForPackageRequestOutcome(outcome.error());
}

void CasClient::cancelCertificateForPackageRequestAsync(const CancelCertificateForPackageRequestRequest& request, const CancelCertificateForPackageRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelCertificateForPackageRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CancelCertificateForPackageRequestOutcomeCallable CasClient::cancelCertificateForPackageRequestCallable(const CancelCertificateForPackageRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelCertificateForPackageRequestOutcome()>>(
			[this, request]()
			{
			return this->cancelCertificateForPackageRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CancelOrderRequestOutcome CasClient::cancelOrderRequest(const CancelOrderRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelOrderRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelOrderRequestOutcome(CancelOrderRequestResult(outcome.result()));
	else
		return CancelOrderRequestOutcome(outcome.error());
}

void CasClient::cancelOrderRequestAsync(const CancelOrderRequestRequest& request, const CancelOrderRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelOrderRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CancelOrderRequestOutcomeCallable CasClient::cancelOrderRequestCallable(const CancelOrderRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelOrderRequestOutcome()>>(
			[this, request]()
			{
			return this->cancelOrderRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateCertificateForPackageRequestOutcome CasClient::createCertificateForPackageRequest(const CreateCertificateForPackageRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCertificateForPackageRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCertificateForPackageRequestOutcome(CreateCertificateForPackageRequestResult(outcome.result()));
	else
		return CreateCertificateForPackageRequestOutcome(outcome.error());
}

void CasClient::createCertificateForPackageRequestAsync(const CreateCertificateForPackageRequestRequest& request, const CreateCertificateForPackageRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCertificateForPackageRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateCertificateForPackageRequestOutcomeCallable CasClient::createCertificateForPackageRequestCallable(const CreateCertificateForPackageRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCertificateForPackageRequestOutcome()>>(
			[this, request]()
			{
			return this->createCertificateForPackageRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateCertificateRequestOutcome CasClient::createCertificateRequest(const CreateCertificateRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCertificateRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCertificateRequestOutcome(CreateCertificateRequestResult(outcome.result()));
	else
		return CreateCertificateRequestOutcome(outcome.error());
}

void CasClient::createCertificateRequestAsync(const CreateCertificateRequestRequest& request, const CreateCertificateRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCertificateRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateCertificateRequestOutcomeCallable CasClient::createCertificateRequestCallable(const CreateCertificateRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCertificateRequestOutcome()>>(
			[this, request]()
			{
			return this->createCertificateRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateCertificateWithCsrRequestOutcome CasClient::createCertificateWithCsrRequest(const CreateCertificateWithCsrRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCertificateWithCsrRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCertificateWithCsrRequestOutcome(CreateCertificateWithCsrRequestResult(outcome.result()));
	else
		return CreateCertificateWithCsrRequestOutcome(outcome.error());
}

void CasClient::createCertificateWithCsrRequestAsync(const CreateCertificateWithCsrRequestRequest& request, const CreateCertificateWithCsrRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCertificateWithCsrRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateCertificateWithCsrRequestOutcomeCallable CasClient::createCertificateWithCsrRequestCallable(const CreateCertificateWithCsrRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCertificateWithCsrRequestOutcome()>>(
			[this, request]()
			{
			return this->createCertificateWithCsrRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateWHClientCertificateOutcome CasClient::createWHClientCertificate(const CreateWHClientCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWHClientCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWHClientCertificateOutcome(CreateWHClientCertificateResult(outcome.result()));
	else
		return CreateWHClientCertificateOutcome(outcome.error());
}

void CasClient::createWHClientCertificateAsync(const CreateWHClientCertificateRequest& request, const CreateWHClientCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWHClientCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateWHClientCertificateOutcomeCallable CasClient::createWHClientCertificateCallable(const CreateWHClientCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWHClientCertificateOutcome()>>(
			[this, request]()
			{
			return this->createWHClientCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DecryptOutcome CasClient::decrypt(const DecryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DecryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DecryptOutcome(DecryptResult(outcome.result()));
	else
		return DecryptOutcome(outcome.error());
}

void CasClient::decryptAsync(const DecryptRequest& request, const DecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, decrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DecryptOutcomeCallable CasClient::decryptCallable(const DecryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DecryptOutcome()>>(
			[this, request]()
			{
			return this->decrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DeleteCertificateRequestOutcome CasClient::deleteCertificateRequest(const DeleteCertificateRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCertificateRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCertificateRequestOutcome(DeleteCertificateRequestResult(outcome.result()));
	else
		return DeleteCertificateRequestOutcome(outcome.error());
}

void CasClient::deleteCertificateRequestAsync(const DeleteCertificateRequestRequest& request, const DeleteCertificateRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCertificateRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DeleteCertificateRequestOutcomeCallable CasClient::deleteCertificateRequestCallable(const DeleteCertificateRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCertificateRequestOutcome()>>(
			[this, request]()
			{
			return this->deleteCertificateRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DeletePCACertOutcome CasClient::deletePCACert(const DeletePCACertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePCACertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePCACertOutcome(DeletePCACertResult(outcome.result()));
	else
		return DeletePCACertOutcome(outcome.error());
}

void CasClient::deletePCACertAsync(const DeletePCACertRequest& request, const DeletePCACertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePCACert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DeletePCACertOutcomeCallable CasClient::deletePCACertCallable(const DeletePCACertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePCACertOutcome()>>(
			[this, request]()
			{
			return this->deletePCACert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DeleteUserCertificateOutcome CasClient::deleteUserCertificate(const DeleteUserCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserCertificateOutcome(DeleteUserCertificateResult(outcome.result()));
	else
		return DeleteUserCertificateOutcome(outcome.error());
}

void CasClient::deleteUserCertificateAsync(const DeleteUserCertificateRequest& request, const DeleteUserCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DeleteUserCertificateOutcomeCallable CasClient::deleteUserCertificateCallable(const DeleteUserCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserCertificateOutcome()>>(
			[this, request]()
			{
			return this->deleteUserCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeCertificateStateOutcome CasClient::describeCertificateState(const DescribeCertificateStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCertificateStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCertificateStateOutcome(DescribeCertificateStateResult(outcome.result()));
	else
		return DescribeCertificateStateOutcome(outcome.error());
}

void CasClient::describeCertificateStateAsync(const DescribeCertificateStateRequest& request, const DescribeCertificateStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCertificateState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeCertificateStateOutcomeCallable CasClient::describeCertificateStateCallable(const DescribeCertificateStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCertificateStateOutcome()>>(
			[this, request]()
			{
			return this->describeCertificateState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribePackageStateOutcome CasClient::describePackageState(const DescribePackageStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePackageStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePackageStateOutcome(DescribePackageStateResult(outcome.result()));
	else
		return DescribePackageStateOutcome(outcome.error());
}

void CasClient::describePackageStateAsync(const DescribePackageStateRequest& request, const DescribePackageStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePackageState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribePackageStateOutcomeCallable CasClient::describePackageStateCallable(const DescribePackageStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePackageStateOutcome()>>(
			[this, request]()
			{
			return this->describePackageState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::EncryptOutcome CasClient::encrypt(const EncryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EncryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EncryptOutcome(EncryptResult(outcome.result()));
	else
		return EncryptOutcome(outcome.error());
}

void CasClient::encryptAsync(const EncryptRequest& request, const EncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, encrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::EncryptOutcomeCallable CasClient::encryptCallable(const EncryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EncryptOutcome()>>(
			[this, request]()
			{
			return this->encrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::GetCertWarehouseQuotaOutcome CasClient::getCertWarehouseQuota(const GetCertWarehouseQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCertWarehouseQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCertWarehouseQuotaOutcome(GetCertWarehouseQuotaResult(outcome.result()));
	else
		return GetCertWarehouseQuotaOutcome(outcome.error());
}

void CasClient::getCertWarehouseQuotaAsync(const GetCertWarehouseQuotaRequest& request, const GetCertWarehouseQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCertWarehouseQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::GetCertWarehouseQuotaOutcomeCallable CasClient::getCertWarehouseQuotaCallable(const GetCertWarehouseQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCertWarehouseQuotaOutcome()>>(
			[this, request]()
			{
			return this->getCertWarehouseQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::GetUserCertificateDetailOutcome CasClient::getUserCertificateDetail(const GetUserCertificateDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserCertificateDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserCertificateDetailOutcome(GetUserCertificateDetailResult(outcome.result()));
	else
		return GetUserCertificateDetailOutcome(outcome.error());
}

void CasClient::getUserCertificateDetailAsync(const GetUserCertificateDetailRequest& request, const GetUserCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserCertificateDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::GetUserCertificateDetailOutcomeCallable CasClient::getUserCertificateDetailCallable(const GetUserCertificateDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserCertificateDetailOutcome()>>(
			[this, request]()
			{
			return this->getUserCertificateDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::ListCertOutcome CasClient::listCert(const ListCertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCertOutcome(ListCertResult(outcome.result()));
	else
		return ListCertOutcome(outcome.error());
}

void CasClient::listCertAsync(const ListCertRequest& request, const ListCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::ListCertOutcomeCallable CasClient::listCertCallable(const ListCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCertOutcome()>>(
			[this, request]()
			{
			return this->listCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::ListCertWarehouseOutcome CasClient::listCertWarehouse(const ListCertWarehouseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCertWarehouseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCertWarehouseOutcome(ListCertWarehouseResult(outcome.result()));
	else
		return ListCertWarehouseOutcome(outcome.error());
}

void CasClient::listCertWarehouseAsync(const ListCertWarehouseRequest& request, const ListCertWarehouseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCertWarehouse(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::ListCertWarehouseOutcomeCallable CasClient::listCertWarehouseCallable(const ListCertWarehouseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCertWarehouseOutcome()>>(
			[this, request]()
			{
			return this->listCertWarehouse(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::ListUserCertificateOrderOutcome CasClient::listUserCertificateOrder(const ListUserCertificateOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserCertificateOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserCertificateOrderOutcome(ListUserCertificateOrderResult(outcome.result()));
	else
		return ListUserCertificateOrderOutcome(outcome.error());
}

void CasClient::listUserCertificateOrderAsync(const ListUserCertificateOrderRequest& request, const ListUserCertificateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserCertificateOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::ListUserCertificateOrderOutcomeCallable CasClient::listUserCertificateOrderCallable(const ListUserCertificateOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserCertificateOrderOutcome()>>(
			[this, request]()
			{
			return this->listUserCertificateOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::RenewCertificateOrderForPackageRequestOutcome CasClient::renewCertificateOrderForPackageRequest(const RenewCertificateOrderForPackageRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewCertificateOrderForPackageRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewCertificateOrderForPackageRequestOutcome(RenewCertificateOrderForPackageRequestResult(outcome.result()));
	else
		return RenewCertificateOrderForPackageRequestOutcome(outcome.error());
}

void CasClient::renewCertificateOrderForPackageRequestAsync(const RenewCertificateOrderForPackageRequestRequest& request, const RenewCertificateOrderForPackageRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewCertificateOrderForPackageRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::RenewCertificateOrderForPackageRequestOutcomeCallable CasClient::renewCertificateOrderForPackageRequestCallable(const RenewCertificateOrderForPackageRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewCertificateOrderForPackageRequestOutcome()>>(
			[this, request]()
			{
			return this->renewCertificateOrderForPackageRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::RevokeWHClientCertificateOutcome CasClient::revokeWHClientCertificate(const RevokeWHClientCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeWHClientCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeWHClientCertificateOutcome(RevokeWHClientCertificateResult(outcome.result()));
	else
		return RevokeWHClientCertificateOutcome(outcome.error());
}

void CasClient::revokeWHClientCertificateAsync(const RevokeWHClientCertificateRequest& request, const RevokeWHClientCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeWHClientCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::RevokeWHClientCertificateOutcomeCallable CasClient::revokeWHClientCertificateCallable(const RevokeWHClientCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeWHClientCertificateOutcome()>>(
			[this, request]()
			{
			return this->revokeWHClientCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::SignOutcome CasClient::sign(const SignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SignOutcome(SignResult(outcome.result()));
	else
		return SignOutcome(outcome.error());
}

void CasClient::signAsync(const SignRequest& request, const SignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::SignOutcomeCallable CasClient::signCallable(const SignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SignOutcome()>>(
			[this, request]()
			{
			return this->sign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::UploadPCACertOutcome CasClient::uploadPCACert(const UploadPCACertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadPCACertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadPCACertOutcome(UploadPCACertResult(outcome.result()));
	else
		return UploadPCACertOutcome(outcome.error());
}

void CasClient::uploadPCACertAsync(const UploadPCACertRequest& request, const UploadPCACertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadPCACert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::UploadPCACertOutcomeCallable CasClient::uploadPCACertCallable(const UploadPCACertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadPCACertOutcome()>>(
			[this, request]()
			{
			return this->uploadPCACert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::UploadUserCertificateOutcome CasClient::uploadUserCertificate(const UploadUserCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadUserCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadUserCertificateOutcome(UploadUserCertificateResult(outcome.result()));
	else
		return UploadUserCertificateOutcome(outcome.error());
}

void CasClient::uploadUserCertificateAsync(const UploadUserCertificateRequest& request, const UploadUserCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadUserCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::UploadUserCertificateOutcomeCallable CasClient::uploadUserCertificateCallable(const UploadUserCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadUserCertificateOutcome()>>(
			[this, request]()
			{
			return this->uploadUserCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::VerifyOutcome CasClient::verify(const VerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyOutcome(VerifyResult(outcome.result()));
	else
		return VerifyOutcome(outcome.error());
}

void CasClient::verifyAsync(const VerifyRequest& request, const VerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::VerifyOutcomeCallable CasClient::verifyCallable(const VerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyOutcome()>>(
			[this, request]()
			{
			return this->verify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

