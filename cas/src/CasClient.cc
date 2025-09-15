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

CasClient::CreateClientCertificateOutcome CasClient::createClientCertificate(const CreateClientCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClientCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClientCertificateOutcome(CreateClientCertificateResult(outcome.result()));
	else
		return CreateClientCertificateOutcome(outcome.error());
}

void CasClient::createClientCertificateAsync(const CreateClientCertificateRequest& request, const CreateClientCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClientCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateClientCertificateOutcomeCallable CasClient::createClientCertificateCallable(const CreateClientCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClientCertificateOutcome()>>(
			[this, request]()
			{
			return this->createClientCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateClientCertificateWithCsrOutcome CasClient::createClientCertificateWithCsr(const CreateClientCertificateWithCsrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClientCertificateWithCsrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClientCertificateWithCsrOutcome(CreateClientCertificateWithCsrResult(outcome.result()));
	else
		return CreateClientCertificateWithCsrOutcome(outcome.error());
}

void CasClient::createClientCertificateWithCsrAsync(const CreateClientCertificateWithCsrRequest& request, const CreateClientCertificateWithCsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClientCertificateWithCsr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateClientCertificateWithCsrOutcomeCallable CasClient::createClientCertificateWithCsrCallable(const CreateClientCertificateWithCsrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClientCertificateWithCsrOutcome()>>(
			[this, request]()
			{
			return this->createClientCertificateWithCsr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateCustomCertificateOutcome CasClient::createCustomCertificate(const CreateCustomCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomCertificateOutcome(CreateCustomCertificateResult(outcome.result()));
	else
		return CreateCustomCertificateOutcome(outcome.error());
}

void CasClient::createCustomCertificateAsync(const CreateCustomCertificateRequest& request, const CreateCustomCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateCustomCertificateOutcomeCallable CasClient::createCustomCertificateCallable(const CreateCustomCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomCertificateOutcome()>>(
			[this, request]()
			{
			return this->createCustomCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateExternalCACertificateOutcome CasClient::createExternalCACertificate(const CreateExternalCACertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateExternalCACertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateExternalCACertificateOutcome(CreateExternalCACertificateResult(outcome.result()));
	else
		return CreateExternalCACertificateOutcome(outcome.error());
}

void CasClient::createExternalCACertificateAsync(const CreateExternalCACertificateRequest& request, const CreateExternalCACertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createExternalCACertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateExternalCACertificateOutcomeCallable CasClient::createExternalCACertificateCallable(const CreateExternalCACertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateExternalCACertificateOutcome()>>(
			[this, request]()
			{
			return this->createExternalCACertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateRevokeClientCertificateOutcome CasClient::createRevokeClientCertificate(const CreateRevokeClientCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRevokeClientCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRevokeClientCertificateOutcome(CreateRevokeClientCertificateResult(outcome.result()));
	else
		return CreateRevokeClientCertificateOutcome(outcome.error());
}

void CasClient::createRevokeClientCertificateAsync(const CreateRevokeClientCertificateRequest& request, const CreateRevokeClientCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRevokeClientCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateRevokeClientCertificateOutcomeCallable CasClient::createRevokeClientCertificateCallable(const CreateRevokeClientCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRevokeClientCertificateOutcome()>>(
			[this, request]()
			{
			return this->createRevokeClientCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateRootCACertificateOutcome CasClient::createRootCACertificate(const CreateRootCACertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRootCACertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRootCACertificateOutcome(CreateRootCACertificateResult(outcome.result()));
	else
		return CreateRootCACertificateOutcome(outcome.error());
}

void CasClient::createRootCACertificateAsync(const CreateRootCACertificateRequest& request, const CreateRootCACertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRootCACertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateRootCACertificateOutcomeCallable CasClient::createRootCACertificateCallable(const CreateRootCACertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRootCACertificateOutcome()>>(
			[this, request]()
			{
			return this->createRootCACertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateServerCertificateOutcome CasClient::createServerCertificate(const CreateServerCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServerCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServerCertificateOutcome(CreateServerCertificateResult(outcome.result()));
	else
		return CreateServerCertificateOutcome(outcome.error());
}

void CasClient::createServerCertificateAsync(const CreateServerCertificateRequest& request, const CreateServerCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServerCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateServerCertificateOutcomeCallable CasClient::createServerCertificateCallable(const CreateServerCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServerCertificateOutcome()>>(
			[this, request]()
			{
			return this->createServerCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateServerCertificateWithCsrOutcome CasClient::createServerCertificateWithCsr(const CreateServerCertificateWithCsrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServerCertificateWithCsrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServerCertificateWithCsrOutcome(CreateServerCertificateWithCsrResult(outcome.result()));
	else
		return CreateServerCertificateWithCsrOutcome(outcome.error());
}

void CasClient::createServerCertificateWithCsrAsync(const CreateServerCertificateWithCsrRequest& request, const CreateServerCertificateWithCsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServerCertificateWithCsr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateServerCertificateWithCsrOutcomeCallable CasClient::createServerCertificateWithCsrCallable(const CreateServerCertificateWithCsrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServerCertificateWithCsrOutcome()>>(
			[this, request]()
			{
			return this->createServerCertificateWithCsr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateSubCACertificateOutcome CasClient::createSubCACertificate(const CreateSubCACertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSubCACertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSubCACertificateOutcome(CreateSubCACertificateResult(outcome.result()));
	else
		return CreateSubCACertificateOutcome(outcome.error());
}

void CasClient::createSubCACertificateAsync(const CreateSubCACertificateRequest& request, const CreateSubCACertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSubCACertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateSubCACertificateOutcomeCallable CasClient::createSubCACertificateCallable(const CreateSubCACertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSubCACertificateOutcome()>>(
			[this, request]()
			{
			return this->createSubCACertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DeleteClientCertificateOutcome CasClient::deleteClientCertificate(const DeleteClientCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClientCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClientCertificateOutcome(DeleteClientCertificateResult(outcome.result()));
	else
		return DeleteClientCertificateOutcome(outcome.error());
}

void CasClient::deleteClientCertificateAsync(const DeleteClientCertificateRequest& request, const DeleteClientCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteClientCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DeleteClientCertificateOutcomeCallable CasClient::deleteClientCertificateCallable(const DeleteClientCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClientCertificateOutcome()>>(
			[this, request]()
			{
			return this->deleteClientCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeCACertificateOutcome CasClient::describeCACertificate(const DescribeCACertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCACertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCACertificateOutcome(DescribeCACertificateResult(outcome.result()));
	else
		return DescribeCACertificateOutcome(outcome.error());
}

void CasClient::describeCACertificateAsync(const DescribeCACertificateRequest& request, const DescribeCACertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCACertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeCACertificateOutcomeCallable CasClient::describeCACertificateCallable(const DescribeCACertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCACertificateOutcome()>>(
			[this, request]()
			{
			return this->describeCACertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeCACertificateCountOutcome CasClient::describeCACertificateCount(const DescribeCACertificateCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCACertificateCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCACertificateCountOutcome(DescribeCACertificateCountResult(outcome.result()));
	else
		return DescribeCACertificateCountOutcome(outcome.error());
}

void CasClient::describeCACertificateCountAsync(const DescribeCACertificateCountRequest& request, const DescribeCACertificateCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCACertificateCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeCACertificateCountOutcomeCallable CasClient::describeCACertificateCountCallable(const DescribeCACertificateCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCACertificateCountOutcome()>>(
			[this, request]()
			{
			return this->describeCACertificateCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeCACertificateListOutcome CasClient::describeCACertificateList(const DescribeCACertificateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCACertificateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCACertificateListOutcome(DescribeCACertificateListResult(outcome.result()));
	else
		return DescribeCACertificateListOutcome(outcome.error());
}

void CasClient::describeCACertificateListAsync(const DescribeCACertificateListRequest& request, const DescribeCACertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCACertificateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeCACertificateListOutcomeCallable CasClient::describeCACertificateListCallable(const DescribeCACertificateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCACertificateListOutcome()>>(
			[this, request]()
			{
			return this->describeCACertificateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeCertificatePrivateKeyOutcome CasClient::describeCertificatePrivateKey(const DescribeCertificatePrivateKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCertificatePrivateKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCertificatePrivateKeyOutcome(DescribeCertificatePrivateKeyResult(outcome.result()));
	else
		return DescribeCertificatePrivateKeyOutcome(outcome.error());
}

void CasClient::describeCertificatePrivateKeyAsync(const DescribeCertificatePrivateKeyRequest& request, const DescribeCertificatePrivateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCertificatePrivateKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeCertificatePrivateKeyOutcomeCallable CasClient::describeCertificatePrivateKeyCallable(const DescribeCertificatePrivateKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCertificatePrivateKeyOutcome()>>(
			[this, request]()
			{
			return this->describeCertificatePrivateKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeClientCertificateOutcome CasClient::describeClientCertificate(const DescribeClientCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClientCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClientCertificateOutcome(DescribeClientCertificateResult(outcome.result()));
	else
		return DescribeClientCertificateOutcome(outcome.error());
}

void CasClient::describeClientCertificateAsync(const DescribeClientCertificateRequest& request, const DescribeClientCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClientCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeClientCertificateOutcomeCallable CasClient::describeClientCertificateCallable(const DescribeClientCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClientCertificateOutcome()>>(
			[this, request]()
			{
			return this->describeClientCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeClientCertificateStatusOutcome CasClient::describeClientCertificateStatus(const DescribeClientCertificateStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClientCertificateStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClientCertificateStatusOutcome(DescribeClientCertificateStatusResult(outcome.result()));
	else
		return DescribeClientCertificateStatusOutcome(outcome.error());
}

void CasClient::describeClientCertificateStatusAsync(const DescribeClientCertificateStatusRequest& request, const DescribeClientCertificateStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClientCertificateStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeClientCertificateStatusOutcomeCallable CasClient::describeClientCertificateStatusCallable(const DescribeClientCertificateStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClientCertificateStatusOutcome()>>(
			[this, request]()
			{
			return this->describeClientCertificateStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::GetCAInstanceStatusOutcome CasClient::getCAInstanceStatus(const GetCAInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCAInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCAInstanceStatusOutcome(GetCAInstanceStatusResult(outcome.result()));
	else
		return GetCAInstanceStatusOutcome(outcome.error());
}

void CasClient::getCAInstanceStatusAsync(const GetCAInstanceStatusRequest& request, const GetCAInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCAInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::GetCAInstanceStatusOutcomeCallable CasClient::getCAInstanceStatusCallable(const GetCAInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCAInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->getCAInstanceStatus(request);
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

CasClient::ListClientCertificateOutcome CasClient::listClientCertificate(const ListClientCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClientCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClientCertificateOutcome(ListClientCertificateResult(outcome.result()));
	else
		return ListClientCertificateOutcome(outcome.error());
}

void CasClient::listClientCertificateAsync(const ListClientCertificateRequest& request, const ListClientCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClientCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::ListClientCertificateOutcomeCallable CasClient::listClientCertificateCallable(const ListClientCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClientCertificateOutcome()>>(
			[this, request]()
			{
			return this->listClientCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::ListPcaCaCertificateOutcome CasClient::listPcaCaCertificate(const ListPcaCaCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPcaCaCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPcaCaCertificateOutcome(ListPcaCaCertificateResult(outcome.result()));
	else
		return ListPcaCaCertificateOutcome(outcome.error());
}

void CasClient::listPcaCaCertificateAsync(const ListPcaCaCertificateRequest& request, const ListPcaCaCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPcaCaCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::ListPcaCaCertificateOutcomeCallable CasClient::listPcaCaCertificateCallable(const ListPcaCaCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPcaCaCertificateOutcome()>>(
			[this, request]()
			{
			return this->listPcaCaCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::ListRevokeCertificateOutcome CasClient::listRevokeCertificate(const ListRevokeCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRevokeCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRevokeCertificateOutcome(ListRevokeCertificateResult(outcome.result()));
	else
		return ListRevokeCertificateOutcome(outcome.error());
}

void CasClient::listRevokeCertificateAsync(const ListRevokeCertificateRequest& request, const ListRevokeCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRevokeCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::ListRevokeCertificateOutcomeCallable CasClient::listRevokeCertificateCallable(const ListRevokeCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRevokeCertificateOutcome()>>(
			[this, request]()
			{
			return this->listRevokeCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::UpdateCACertificateStatusOutcome CasClient::updateCACertificateStatus(const UpdateCACertificateStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCACertificateStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCACertificateStatusOutcome(UpdateCACertificateStatusResult(outcome.result()));
	else
		return UpdateCACertificateStatusOutcome(outcome.error());
}

void CasClient::updateCACertificateStatusAsync(const UpdateCACertificateStatusRequest& request, const UpdateCACertificateStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCACertificateStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::UpdateCACertificateStatusOutcomeCallable CasClient::updateCACertificateStatusCallable(const UpdateCACertificateStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCACertificateStatusOutcome()>>(
			[this, request]()
			{
			return this->updateCACertificateStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::UploadPcaCertToCasOutcome CasClient::uploadPcaCertToCas(const UploadPcaCertToCasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadPcaCertToCasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadPcaCertToCasOutcome(UploadPcaCertToCasResult(outcome.result()));
	else
		return UploadPcaCertToCasOutcome(outcome.error());
}

void CasClient::uploadPcaCertToCasAsync(const UploadPcaCertToCasRequest& request, const UploadPcaCertToCasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadPcaCertToCas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::UploadPcaCertToCasOutcomeCallable CasClient::uploadPcaCertToCasCallable(const UploadPcaCertToCasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadPcaCertToCasOutcome()>>(
			[this, request]()
			{
			return this->uploadPcaCertToCas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

