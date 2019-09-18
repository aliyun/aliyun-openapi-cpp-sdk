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

#include <alibabacloud/crm/CrmClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Crm;
using namespace AlibabaCloud::Crm::Model;

namespace
{
	const std::string SERVICE_NAME = "Crm";
}

CrmClient::CrmClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "crm");
}

CrmClient::CrmClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "crm");
}

CrmClient::CrmClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "crm");
}

CrmClient::~CrmClient()
{}

CrmClient::AddIdentityCertifiedForBidUserOutcome CrmClient::addIdentityCertifiedForBidUser(const AddIdentityCertifiedForBidUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddIdentityCertifiedForBidUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddIdentityCertifiedForBidUserOutcome(AddIdentityCertifiedForBidUserResult(outcome.result()));
	else
		return AddIdentityCertifiedForBidUserOutcome(outcome.error());
}

void CrmClient::addIdentityCertifiedForBidUserAsync(const AddIdentityCertifiedForBidUserRequest& request, const AddIdentityCertifiedForBidUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addIdentityCertifiedForBidUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CrmClient::AddIdentityCertifiedForBidUserOutcomeCallable CrmClient::addIdentityCertifiedForBidUserCallable(const AddIdentityCertifiedForBidUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddIdentityCertifiedForBidUserOutcome()>>(
			[this, request]()
			{
			return this->addIdentityCertifiedForBidUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CrmClient::AddLabelOutcome CrmClient::addLabel(const AddLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLabelOutcome(AddLabelResult(outcome.result()));
	else
		return AddLabelOutcome(outcome.error());
}

void CrmClient::addLabelAsync(const AddLabelRequest& request, const AddLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CrmClient::AddLabelOutcomeCallable CrmClient::addLabelCallable(const AddLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLabelOutcome()>>(
			[this, request]()
			{
			return this->addLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CrmClient::AddLabelForBidOutcome CrmClient::addLabelForBid(const AddLabelForBidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLabelForBidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLabelForBidOutcome(AddLabelForBidResult(outcome.result()));
	else
		return AddLabelForBidOutcome(outcome.error());
}

void CrmClient::addLabelForBidAsync(const AddLabelForBidRequest& request, const AddLabelForBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLabelForBid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CrmClient::AddLabelForBidOutcomeCallable CrmClient::addLabelForBidCallable(const AddLabelForBidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLabelForBidOutcome()>>(
			[this, request]()
			{
			return this->addLabelForBid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CrmClient::BatchGetAliyunIdByAliyunPkOutcome CrmClient::batchGetAliyunIdByAliyunPk(const BatchGetAliyunIdByAliyunPkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetAliyunIdByAliyunPkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetAliyunIdByAliyunPkOutcome(BatchGetAliyunIdByAliyunPkResult(outcome.result()));
	else
		return BatchGetAliyunIdByAliyunPkOutcome(outcome.error());
}

void CrmClient::batchGetAliyunIdByAliyunPkAsync(const BatchGetAliyunIdByAliyunPkRequest& request, const BatchGetAliyunIdByAliyunPkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetAliyunIdByAliyunPk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CrmClient::BatchGetAliyunIdByAliyunPkOutcomeCallable CrmClient::batchGetAliyunIdByAliyunPkCallable(const BatchGetAliyunIdByAliyunPkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetAliyunIdByAliyunPkOutcome()>>(
			[this, request]()
			{
			return this->batchGetAliyunIdByAliyunPk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CrmClient::CheckLabelOutcome CrmClient::checkLabel(const CheckLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckLabelOutcome(CheckLabelResult(outcome.result()));
	else
		return CheckLabelOutcome(outcome.error());
}

void CrmClient::checkLabelAsync(const CheckLabelRequest& request, const CheckLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CrmClient::CheckLabelOutcomeCallable CrmClient::checkLabelCallable(const CheckLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckLabelOutcome()>>(
			[this, request]()
			{
			return this->checkLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CrmClient::CheckLabelForBidOutcome CrmClient::checkLabelForBid(const CheckLabelForBidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckLabelForBidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckLabelForBidOutcome(CheckLabelForBidResult(outcome.result()));
	else
		return CheckLabelForBidOutcome(outcome.error());
}

void CrmClient::checkLabelForBidAsync(const CheckLabelForBidRequest& request, const CheckLabelForBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkLabelForBid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CrmClient::CheckLabelForBidOutcomeCallable CrmClient::checkLabelForBidCallable(const CheckLabelForBidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckLabelForBidOutcome()>>(
			[this, request]()
			{
			return this->checkLabelForBid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CrmClient::DeleteLabelOutcome CrmClient::deleteLabel(const DeleteLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLabelOutcome(DeleteLabelResult(outcome.result()));
	else
		return DeleteLabelOutcome(outcome.error());
}

void CrmClient::deleteLabelAsync(const DeleteLabelRequest& request, const DeleteLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CrmClient::DeleteLabelOutcomeCallable CrmClient::deleteLabelCallable(const DeleteLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLabelOutcome()>>(
			[this, request]()
			{
			return this->deleteLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CrmClient::DeleteLabelForBidOutcome CrmClient::deleteLabelForBid(const DeleteLabelForBidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLabelForBidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLabelForBidOutcome(DeleteLabelForBidResult(outcome.result()));
	else
		return DeleteLabelForBidOutcome(outcome.error());
}

void CrmClient::deleteLabelForBidAsync(const DeleteLabelForBidRequest& request, const DeleteLabelForBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLabelForBid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CrmClient::DeleteLabelForBidOutcomeCallable CrmClient::deleteLabelForBidCallable(const DeleteLabelForBidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLabelForBidOutcome()>>(
			[this, request]()
			{
			return this->deleteLabelForBid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CrmClient::GetAliyunPkByAliyunIdOutcome CrmClient::getAliyunPkByAliyunId(const GetAliyunPkByAliyunIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAliyunPkByAliyunIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAliyunPkByAliyunIdOutcome(GetAliyunPkByAliyunIdResult(outcome.result()));
	else
		return GetAliyunPkByAliyunIdOutcome(outcome.error());
}

void CrmClient::getAliyunPkByAliyunIdAsync(const GetAliyunPkByAliyunIdRequest& request, const GetAliyunPkByAliyunIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAliyunPkByAliyunId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CrmClient::GetAliyunPkByAliyunIdOutcomeCallable CrmClient::getAliyunPkByAliyunIdCallable(const GetAliyunPkByAliyunIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAliyunPkByAliyunIdOutcome()>>(
			[this, request]()
			{
			return this->getAliyunPkByAliyunId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CrmClient::QueryBidUserCertifiedInfoOutcome CrmClient::queryBidUserCertifiedInfo(const QueryBidUserCertifiedInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBidUserCertifiedInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBidUserCertifiedInfoOutcome(QueryBidUserCertifiedInfoResult(outcome.result()));
	else
		return QueryBidUserCertifiedInfoOutcome(outcome.error());
}

void CrmClient::queryBidUserCertifiedInfoAsync(const QueryBidUserCertifiedInfoRequest& request, const QueryBidUserCertifiedInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBidUserCertifiedInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CrmClient::QueryBidUserCertifiedInfoOutcomeCallable CrmClient::queryBidUserCertifiedInfoCallable(const QueryBidUserCertifiedInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBidUserCertifiedInfoOutcome()>>(
			[this, request]()
			{
			return this->queryBidUserCertifiedInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CrmClient::QueryCustomerLabelOutcome CrmClient::queryCustomerLabel(const QueryCustomerLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCustomerLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCustomerLabelOutcome(QueryCustomerLabelResult(outcome.result()));
	else
		return QueryCustomerLabelOutcome(outcome.error());
}

void CrmClient::queryCustomerLabelAsync(const QueryCustomerLabelRequest& request, const QueryCustomerLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCustomerLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CrmClient::QueryCustomerLabelOutcomeCallable CrmClient::queryCustomerLabelCallable(const QueryCustomerLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCustomerLabelOutcome()>>(
			[this, request]()
			{
			return this->queryCustomerLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CrmClient::RemoveIdentityCertifiedForBidUserOutcome CrmClient::removeIdentityCertifiedForBidUser(const RemoveIdentityCertifiedForBidUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveIdentityCertifiedForBidUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveIdentityCertifiedForBidUserOutcome(RemoveIdentityCertifiedForBidUserResult(outcome.result()));
	else
		return RemoveIdentityCertifiedForBidUserOutcome(outcome.error());
}

void CrmClient::removeIdentityCertifiedForBidUserAsync(const RemoveIdentityCertifiedForBidUserRequest& request, const RemoveIdentityCertifiedForBidUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeIdentityCertifiedForBidUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CrmClient::RemoveIdentityCertifiedForBidUserOutcomeCallable CrmClient::removeIdentityCertifiedForBidUserCallable(const RemoveIdentityCertifiedForBidUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveIdentityCertifiedForBidUserOutcome()>>(
			[this, request]()
			{
			return this->removeIdentityCertifiedForBidUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

