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

#ifndef ALIBABACLOUD_LEDGERDB_LEDGERDBCLIENT_H_
#define ALIBABACLOUD_LEDGERDB_LEDGERDBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "LedgerdbExport.h"
#include "model/AcceptMemberRequest.h"
#include "model/AcceptMemberResult.h"
#include "model/CreateVpcEndpointRequest.h"
#include "model/CreateVpcEndpointResult.h"
#include "model/DeleteLedgerRequest.h"
#include "model/DeleteLedgerResult.h"
#include "model/DeleteMemberRequest.h"
#include "model/DeleteMemberResult.h"
#include "model/DeleteVpcEndpointRequest.h"
#include "model/DeleteVpcEndpointResult.h"
#include "model/DescribeLedgerRequest.h"
#include "model/DescribeLedgerResult.h"
#include "model/DescribeLedgersRequest.h"
#include "model/DescribeLedgersResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DisableMemberRequest.h"
#include "model/DisableMemberResult.h"
#include "model/EnableMemberRequest.h"
#include "model/EnableMemberResult.h"
#include "model/GetJournalRequest.h"
#include "model/GetJournalResult.h"
#include "model/GetMemberRequest.h"
#include "model/GetMemberResult.h"
#include "model/InviteMembersRequest.h"
#include "model/InviteMembersResult.h"
#include "model/ListJournalsRequest.h"
#include "model/ListJournalsResult.h"
#include "model/ListMembersRequest.h"
#include "model/ListMembersResult.h"
#include "model/ListTimeAnchorsRequest.h"
#include "model/ListTimeAnchorsResult.h"
#include "model/ListVpcEndpointsRequest.h"
#include "model/ListVpcEndpointsResult.h"
#include "model/ModifyLedgerAttributeRequest.h"
#include "model/ModifyLedgerAttributeResult.h"
#include "model/ModifyMemberACLsRequest.h"
#include "model/ModifyMemberACLsResult.h"
#include "model/ModifyMemberKeyRequest.h"
#include "model/ModifyMemberKeyResult.h"


namespace AlibabaCloud
{
	namespace Ledgerdb
	{
		class ALIBABACLOUD_LEDGERDB_EXPORT LedgerdbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AcceptMemberResult> AcceptMemberOutcome;
			typedef std::future<AcceptMemberOutcome> AcceptMemberOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::AcceptMemberRequest&, const AcceptMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AcceptMemberAsyncHandler;
			typedef Outcome<Error, Model::CreateVpcEndpointResult> CreateVpcEndpointOutcome;
			typedef std::future<CreateVpcEndpointOutcome> CreateVpcEndpointOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::CreateVpcEndpointRequest&, const CreateVpcEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcEndpointAsyncHandler;
			typedef Outcome<Error, Model::DeleteLedgerResult> DeleteLedgerOutcome;
			typedef std::future<DeleteLedgerOutcome> DeleteLedgerOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::DeleteLedgerRequest&, const DeleteLedgerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLedgerAsyncHandler;
			typedef Outcome<Error, Model::DeleteMemberResult> DeleteMemberOutcome;
			typedef std::future<DeleteMemberOutcome> DeleteMemberOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::DeleteMemberRequest&, const DeleteMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMemberAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpcEndpointResult> DeleteVpcEndpointOutcome;
			typedef std::future<DeleteVpcEndpointOutcome> DeleteVpcEndpointOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::DeleteVpcEndpointRequest&, const DeleteVpcEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcEndpointAsyncHandler;
			typedef Outcome<Error, Model::DescribeLedgerResult> DescribeLedgerOutcome;
			typedef std::future<DescribeLedgerOutcome> DescribeLedgerOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::DescribeLedgerRequest&, const DescribeLedgerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLedgerAsyncHandler;
			typedef Outcome<Error, Model::DescribeLedgersResult> DescribeLedgersOutcome;
			typedef std::future<DescribeLedgersOutcome> DescribeLedgersOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::DescribeLedgersRequest&, const DescribeLedgersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLedgersAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DisableMemberResult> DisableMemberOutcome;
			typedef std::future<DisableMemberOutcome> DisableMemberOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::DisableMemberRequest&, const DisableMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableMemberAsyncHandler;
			typedef Outcome<Error, Model::EnableMemberResult> EnableMemberOutcome;
			typedef std::future<EnableMemberOutcome> EnableMemberOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::EnableMemberRequest&, const EnableMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableMemberAsyncHandler;
			typedef Outcome<Error, Model::GetJournalResult> GetJournalOutcome;
			typedef std::future<GetJournalOutcome> GetJournalOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::GetJournalRequest&, const GetJournalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJournalAsyncHandler;
			typedef Outcome<Error, Model::GetMemberResult> GetMemberOutcome;
			typedef std::future<GetMemberOutcome> GetMemberOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::GetMemberRequest&, const GetMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMemberAsyncHandler;
			typedef Outcome<Error, Model::InviteMembersResult> InviteMembersOutcome;
			typedef std::future<InviteMembersOutcome> InviteMembersOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::InviteMembersRequest&, const InviteMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InviteMembersAsyncHandler;
			typedef Outcome<Error, Model::ListJournalsResult> ListJournalsOutcome;
			typedef std::future<ListJournalsOutcome> ListJournalsOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::ListJournalsRequest&, const ListJournalsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJournalsAsyncHandler;
			typedef Outcome<Error, Model::ListMembersResult> ListMembersOutcome;
			typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::ListMembersRequest&, const ListMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMembersAsyncHandler;
			typedef Outcome<Error, Model::ListTimeAnchorsResult> ListTimeAnchorsOutcome;
			typedef std::future<ListTimeAnchorsOutcome> ListTimeAnchorsOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::ListTimeAnchorsRequest&, const ListTimeAnchorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTimeAnchorsAsyncHandler;
			typedef Outcome<Error, Model::ListVpcEndpointsResult> ListVpcEndpointsOutcome;
			typedef std::future<ListVpcEndpointsOutcome> ListVpcEndpointsOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::ListVpcEndpointsRequest&, const ListVpcEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcEndpointsAsyncHandler;
			typedef Outcome<Error, Model::ModifyLedgerAttributeResult> ModifyLedgerAttributeOutcome;
			typedef std::future<ModifyLedgerAttributeOutcome> ModifyLedgerAttributeOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::ModifyLedgerAttributeRequest&, const ModifyLedgerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLedgerAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyMemberACLsResult> ModifyMemberACLsOutcome;
			typedef std::future<ModifyMemberACLsOutcome> ModifyMemberACLsOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::ModifyMemberACLsRequest&, const ModifyMemberACLsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMemberACLsAsyncHandler;
			typedef Outcome<Error, Model::ModifyMemberKeyResult> ModifyMemberKeyOutcome;
			typedef std::future<ModifyMemberKeyOutcome> ModifyMemberKeyOutcomeCallable;
			typedef std::function<void(const LedgerdbClient*, const Model::ModifyMemberKeyRequest&, const ModifyMemberKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMemberKeyAsyncHandler;

			LedgerdbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			LedgerdbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			LedgerdbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~LedgerdbClient();
			AcceptMemberOutcome acceptMember(const Model::AcceptMemberRequest &request)const;
			void acceptMemberAsync(const Model::AcceptMemberRequest& request, const AcceptMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AcceptMemberOutcomeCallable acceptMemberCallable(const Model::AcceptMemberRequest& request) const;
			CreateVpcEndpointOutcome createVpcEndpoint(const Model::CreateVpcEndpointRequest &request)const;
			void createVpcEndpointAsync(const Model::CreateVpcEndpointRequest& request, const CreateVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpcEndpointOutcomeCallable createVpcEndpointCallable(const Model::CreateVpcEndpointRequest& request) const;
			DeleteLedgerOutcome deleteLedger(const Model::DeleteLedgerRequest &request)const;
			void deleteLedgerAsync(const Model::DeleteLedgerRequest& request, const DeleteLedgerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLedgerOutcomeCallable deleteLedgerCallable(const Model::DeleteLedgerRequest& request) const;
			DeleteMemberOutcome deleteMember(const Model::DeleteMemberRequest &request)const;
			void deleteMemberAsync(const Model::DeleteMemberRequest& request, const DeleteMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMemberOutcomeCallable deleteMemberCallable(const Model::DeleteMemberRequest& request) const;
			DeleteVpcEndpointOutcome deleteVpcEndpoint(const Model::DeleteVpcEndpointRequest &request)const;
			void deleteVpcEndpointAsync(const Model::DeleteVpcEndpointRequest& request, const DeleteVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpcEndpointOutcomeCallable deleteVpcEndpointCallable(const Model::DeleteVpcEndpointRequest& request) const;
			DescribeLedgerOutcome describeLedger(const Model::DescribeLedgerRequest &request)const;
			void describeLedgerAsync(const Model::DescribeLedgerRequest& request, const DescribeLedgerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLedgerOutcomeCallable describeLedgerCallable(const Model::DescribeLedgerRequest& request) const;
			DescribeLedgersOutcome describeLedgers(const Model::DescribeLedgersRequest &request)const;
			void describeLedgersAsync(const Model::DescribeLedgersRequest& request, const DescribeLedgersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLedgersOutcomeCallable describeLedgersCallable(const Model::DescribeLedgersRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DisableMemberOutcome disableMember(const Model::DisableMemberRequest &request)const;
			void disableMemberAsync(const Model::DisableMemberRequest& request, const DisableMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableMemberOutcomeCallable disableMemberCallable(const Model::DisableMemberRequest& request) const;
			EnableMemberOutcome enableMember(const Model::EnableMemberRequest &request)const;
			void enableMemberAsync(const Model::EnableMemberRequest& request, const EnableMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableMemberOutcomeCallable enableMemberCallable(const Model::EnableMemberRequest& request) const;
			GetJournalOutcome getJournal(const Model::GetJournalRequest &request)const;
			void getJournalAsync(const Model::GetJournalRequest& request, const GetJournalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJournalOutcomeCallable getJournalCallable(const Model::GetJournalRequest& request) const;
			GetMemberOutcome getMember(const Model::GetMemberRequest &request)const;
			void getMemberAsync(const Model::GetMemberRequest& request, const GetMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMemberOutcomeCallable getMemberCallable(const Model::GetMemberRequest& request) const;
			InviteMembersOutcome inviteMembers(const Model::InviteMembersRequest &request)const;
			void inviteMembersAsync(const Model::InviteMembersRequest& request, const InviteMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InviteMembersOutcomeCallable inviteMembersCallable(const Model::InviteMembersRequest& request) const;
			ListJournalsOutcome listJournals(const Model::ListJournalsRequest &request)const;
			void listJournalsAsync(const Model::ListJournalsRequest& request, const ListJournalsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJournalsOutcomeCallable listJournalsCallable(const Model::ListJournalsRequest& request) const;
			ListMembersOutcome listMembers(const Model::ListMembersRequest &request)const;
			void listMembersAsync(const Model::ListMembersRequest& request, const ListMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMembersOutcomeCallable listMembersCallable(const Model::ListMembersRequest& request) const;
			ListTimeAnchorsOutcome listTimeAnchors(const Model::ListTimeAnchorsRequest &request)const;
			void listTimeAnchorsAsync(const Model::ListTimeAnchorsRequest& request, const ListTimeAnchorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTimeAnchorsOutcomeCallable listTimeAnchorsCallable(const Model::ListTimeAnchorsRequest& request) const;
			ListVpcEndpointsOutcome listVpcEndpoints(const Model::ListVpcEndpointsRequest &request)const;
			void listVpcEndpointsAsync(const Model::ListVpcEndpointsRequest& request, const ListVpcEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcEndpointsOutcomeCallable listVpcEndpointsCallable(const Model::ListVpcEndpointsRequest& request) const;
			ModifyLedgerAttributeOutcome modifyLedgerAttribute(const Model::ModifyLedgerAttributeRequest &request)const;
			void modifyLedgerAttributeAsync(const Model::ModifyLedgerAttributeRequest& request, const ModifyLedgerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLedgerAttributeOutcomeCallable modifyLedgerAttributeCallable(const Model::ModifyLedgerAttributeRequest& request) const;
			ModifyMemberACLsOutcome modifyMemberACLs(const Model::ModifyMemberACLsRequest &request)const;
			void modifyMemberACLsAsync(const Model::ModifyMemberACLsRequest& request, const ModifyMemberACLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMemberACLsOutcomeCallable modifyMemberACLsCallable(const Model::ModifyMemberACLsRequest& request) const;
			ModifyMemberKeyOutcome modifyMemberKey(const Model::ModifyMemberKeyRequest &request)const;
			void modifyMemberKeyAsync(const Model::ModifyMemberKeyRequest& request, const ModifyMemberKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMemberKeyOutcomeCallable modifyMemberKeyCallable(const Model::ModifyMemberKeyRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_LEDGERDB_LEDGERDBCLIENT_H_
