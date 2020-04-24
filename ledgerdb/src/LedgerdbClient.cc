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

#include <alibabacloud/ledgerdb/LedgerdbClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ledgerdb;
using namespace AlibabaCloud::Ledgerdb::Model;

namespace
{
	const std::string SERVICE_NAME = "ledgerdb";
}

LedgerdbClient::LedgerdbClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ledgerdb");
}

LedgerdbClient::LedgerdbClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ledgerdb");
}

LedgerdbClient::LedgerdbClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ledgerdb");
}

LedgerdbClient::~LedgerdbClient()
{}

LedgerdbClient::AcceptMemberOutcome LedgerdbClient::acceptMember(const AcceptMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AcceptMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AcceptMemberOutcome(AcceptMemberResult(outcome.result()));
	else
		return AcceptMemberOutcome(outcome.error());
}

void LedgerdbClient::acceptMemberAsync(const AcceptMemberRequest& request, const AcceptMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, acceptMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::AcceptMemberOutcomeCallable LedgerdbClient::acceptMemberCallable(const AcceptMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AcceptMemberOutcome()>>(
			[this, request]()
			{
			return this->acceptMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::CreateVpcEndpointOutcome LedgerdbClient::createVpcEndpoint(const CreateVpcEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVpcEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVpcEndpointOutcome(CreateVpcEndpointResult(outcome.result()));
	else
		return CreateVpcEndpointOutcome(outcome.error());
}

void LedgerdbClient::createVpcEndpointAsync(const CreateVpcEndpointRequest& request, const CreateVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVpcEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::CreateVpcEndpointOutcomeCallable LedgerdbClient::createVpcEndpointCallable(const CreateVpcEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVpcEndpointOutcome()>>(
			[this, request]()
			{
			return this->createVpcEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::DeleteLedgerOutcome LedgerdbClient::deleteLedger(const DeleteLedgerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLedgerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLedgerOutcome(DeleteLedgerResult(outcome.result()));
	else
		return DeleteLedgerOutcome(outcome.error());
}

void LedgerdbClient::deleteLedgerAsync(const DeleteLedgerRequest& request, const DeleteLedgerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLedger(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::DeleteLedgerOutcomeCallable LedgerdbClient::deleteLedgerCallable(const DeleteLedgerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLedgerOutcome()>>(
			[this, request]()
			{
			return this->deleteLedger(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::DeleteMemberOutcome LedgerdbClient::deleteMember(const DeleteMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMemberOutcome(DeleteMemberResult(outcome.result()));
	else
		return DeleteMemberOutcome(outcome.error());
}

void LedgerdbClient::deleteMemberAsync(const DeleteMemberRequest& request, const DeleteMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::DeleteMemberOutcomeCallable LedgerdbClient::deleteMemberCallable(const DeleteMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMemberOutcome()>>(
			[this, request]()
			{
			return this->deleteMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::DeleteVpcEndpointOutcome LedgerdbClient::deleteVpcEndpoint(const DeleteVpcEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpcEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpcEndpointOutcome(DeleteVpcEndpointResult(outcome.result()));
	else
		return DeleteVpcEndpointOutcome(outcome.error());
}

void LedgerdbClient::deleteVpcEndpointAsync(const DeleteVpcEndpointRequest& request, const DeleteVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpcEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::DeleteVpcEndpointOutcomeCallable LedgerdbClient::deleteVpcEndpointCallable(const DeleteVpcEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpcEndpointOutcome()>>(
			[this, request]()
			{
			return this->deleteVpcEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::DescribeLedgerOutcome LedgerdbClient::describeLedger(const DescribeLedgerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLedgerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLedgerOutcome(DescribeLedgerResult(outcome.result()));
	else
		return DescribeLedgerOutcome(outcome.error());
}

void LedgerdbClient::describeLedgerAsync(const DescribeLedgerRequest& request, const DescribeLedgerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLedger(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::DescribeLedgerOutcomeCallable LedgerdbClient::describeLedgerCallable(const DescribeLedgerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLedgerOutcome()>>(
			[this, request]()
			{
			return this->describeLedger(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::DescribeLedgersOutcome LedgerdbClient::describeLedgers(const DescribeLedgersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLedgersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLedgersOutcome(DescribeLedgersResult(outcome.result()));
	else
		return DescribeLedgersOutcome(outcome.error());
}

void LedgerdbClient::describeLedgersAsync(const DescribeLedgersRequest& request, const DescribeLedgersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLedgers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::DescribeLedgersOutcomeCallable LedgerdbClient::describeLedgersCallable(const DescribeLedgersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLedgersOutcome()>>(
			[this, request]()
			{
			return this->describeLedgers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::DescribeRegionsOutcome LedgerdbClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void LedgerdbClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::DescribeRegionsOutcomeCallable LedgerdbClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::DisableMemberOutcome LedgerdbClient::disableMember(const DisableMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableMemberOutcome(DisableMemberResult(outcome.result()));
	else
		return DisableMemberOutcome(outcome.error());
}

void LedgerdbClient::disableMemberAsync(const DisableMemberRequest& request, const DisableMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::DisableMemberOutcomeCallable LedgerdbClient::disableMemberCallable(const DisableMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableMemberOutcome()>>(
			[this, request]()
			{
			return this->disableMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::EnableMemberOutcome LedgerdbClient::enableMember(const EnableMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableMemberOutcome(EnableMemberResult(outcome.result()));
	else
		return EnableMemberOutcome(outcome.error());
}

void LedgerdbClient::enableMemberAsync(const EnableMemberRequest& request, const EnableMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::EnableMemberOutcomeCallable LedgerdbClient::enableMemberCallable(const EnableMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableMemberOutcome()>>(
			[this, request]()
			{
			return this->enableMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::GetJournalOutcome LedgerdbClient::getJournal(const GetJournalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJournalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJournalOutcome(GetJournalResult(outcome.result()));
	else
		return GetJournalOutcome(outcome.error());
}

void LedgerdbClient::getJournalAsync(const GetJournalRequest& request, const GetJournalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJournal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::GetJournalOutcomeCallable LedgerdbClient::getJournalCallable(const GetJournalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJournalOutcome()>>(
			[this, request]()
			{
			return this->getJournal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::GetMemberOutcome LedgerdbClient::getMember(const GetMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMemberOutcome(GetMemberResult(outcome.result()));
	else
		return GetMemberOutcome(outcome.error());
}

void LedgerdbClient::getMemberAsync(const GetMemberRequest& request, const GetMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::GetMemberOutcomeCallable LedgerdbClient::getMemberCallable(const GetMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMemberOutcome()>>(
			[this, request]()
			{
			return this->getMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::InviteMembersOutcome LedgerdbClient::inviteMembers(const InviteMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InviteMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InviteMembersOutcome(InviteMembersResult(outcome.result()));
	else
		return InviteMembersOutcome(outcome.error());
}

void LedgerdbClient::inviteMembersAsync(const InviteMembersRequest& request, const InviteMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, inviteMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::InviteMembersOutcomeCallable LedgerdbClient::inviteMembersCallable(const InviteMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InviteMembersOutcome()>>(
			[this, request]()
			{
			return this->inviteMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::ListJournalsOutcome LedgerdbClient::listJournals(const ListJournalsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJournalsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJournalsOutcome(ListJournalsResult(outcome.result()));
	else
		return ListJournalsOutcome(outcome.error());
}

void LedgerdbClient::listJournalsAsync(const ListJournalsRequest& request, const ListJournalsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJournals(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::ListJournalsOutcomeCallable LedgerdbClient::listJournalsCallable(const ListJournalsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJournalsOutcome()>>(
			[this, request]()
			{
			return this->listJournals(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::ListMembersOutcome LedgerdbClient::listMembers(const ListMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMembersOutcome(ListMembersResult(outcome.result()));
	else
		return ListMembersOutcome(outcome.error());
}

void LedgerdbClient::listMembersAsync(const ListMembersRequest& request, const ListMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::ListMembersOutcomeCallable LedgerdbClient::listMembersCallable(const ListMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMembersOutcome()>>(
			[this, request]()
			{
			return this->listMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::ListTimeAnchorsOutcome LedgerdbClient::listTimeAnchors(const ListTimeAnchorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTimeAnchorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTimeAnchorsOutcome(ListTimeAnchorsResult(outcome.result()));
	else
		return ListTimeAnchorsOutcome(outcome.error());
}

void LedgerdbClient::listTimeAnchorsAsync(const ListTimeAnchorsRequest& request, const ListTimeAnchorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTimeAnchors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::ListTimeAnchorsOutcomeCallable LedgerdbClient::listTimeAnchorsCallable(const ListTimeAnchorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTimeAnchorsOutcome()>>(
			[this, request]()
			{
			return this->listTimeAnchors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::ListVpcEndpointsOutcome LedgerdbClient::listVpcEndpoints(const ListVpcEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpcEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpcEndpointsOutcome(ListVpcEndpointsResult(outcome.result()));
	else
		return ListVpcEndpointsOutcome(outcome.error());
}

void LedgerdbClient::listVpcEndpointsAsync(const ListVpcEndpointsRequest& request, const ListVpcEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpcEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::ListVpcEndpointsOutcomeCallable LedgerdbClient::listVpcEndpointsCallable(const ListVpcEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpcEndpointsOutcome()>>(
			[this, request]()
			{
			return this->listVpcEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::ModifyLedgerAttributeOutcome LedgerdbClient::modifyLedgerAttribute(const ModifyLedgerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLedgerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLedgerAttributeOutcome(ModifyLedgerAttributeResult(outcome.result()));
	else
		return ModifyLedgerAttributeOutcome(outcome.error());
}

void LedgerdbClient::modifyLedgerAttributeAsync(const ModifyLedgerAttributeRequest& request, const ModifyLedgerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLedgerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::ModifyLedgerAttributeOutcomeCallable LedgerdbClient::modifyLedgerAttributeCallable(const ModifyLedgerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLedgerAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyLedgerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::ModifyMemberACLsOutcome LedgerdbClient::modifyMemberACLs(const ModifyMemberACLsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMemberACLsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMemberACLsOutcome(ModifyMemberACLsResult(outcome.result()));
	else
		return ModifyMemberACLsOutcome(outcome.error());
}

void LedgerdbClient::modifyMemberACLsAsync(const ModifyMemberACLsRequest& request, const ModifyMemberACLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMemberACLs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::ModifyMemberACLsOutcomeCallable LedgerdbClient::modifyMemberACLsCallable(const ModifyMemberACLsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMemberACLsOutcome()>>(
			[this, request]()
			{
			return this->modifyMemberACLs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LedgerdbClient::ModifyMemberKeyOutcome LedgerdbClient::modifyMemberKey(const ModifyMemberKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMemberKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMemberKeyOutcome(ModifyMemberKeyResult(outcome.result()));
	else
		return ModifyMemberKeyOutcome(outcome.error());
}

void LedgerdbClient::modifyMemberKeyAsync(const ModifyMemberKeyRequest& request, const ModifyMemberKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMemberKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LedgerdbClient::ModifyMemberKeyOutcomeCallable LedgerdbClient::modifyMemberKeyCallable(const ModifyMemberKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMemberKeyOutcome()>>(
			[this, request]()
			{
			return this->modifyMemberKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

