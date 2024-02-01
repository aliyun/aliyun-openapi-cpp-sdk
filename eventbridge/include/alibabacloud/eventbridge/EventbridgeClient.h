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

#ifndef ALIBABACLOUD_EVENTBRIDGE_EVENTBRIDGECLIENT_H_
#define ALIBABACLOUD_EVENTBRIDGE_EVENTBRIDGECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EventbridgeExport.h"
#include "model/CreateApiDestinationRequest.h"
#include "model/CreateApiDestinationResult.h"
#include "model/CreateConnectionRequest.h"
#include "model/CreateConnectionResult.h"
#include "model/CreateEventBusRequest.h"
#include "model/CreateEventBusResult.h"
#include "model/CreateEventSourceRequest.h"
#include "model/CreateEventSourceResult.h"
#include "model/CreateEventStreamingRequest.h"
#include "model/CreateEventStreamingResult.h"
#include "model/CreateRuleRequest.h"
#include "model/CreateRuleResult.h"
#include "model/CreateServiceLinkedRoleForProductRequest.h"
#include "model/CreateServiceLinkedRoleForProductResult.h"
#include "model/DeleteApiDestinationRequest.h"
#include "model/DeleteApiDestinationResult.h"
#include "model/DeleteConnectionRequest.h"
#include "model/DeleteConnectionResult.h"
#include "model/DeleteEventBusRequest.h"
#include "model/DeleteEventBusResult.h"
#include "model/DeleteEventSourceRequest.h"
#include "model/DeleteEventSourceResult.h"
#include "model/DeleteEventStreamingRequest.h"
#include "model/DeleteEventStreamingResult.h"
#include "model/DeleteRuleRequest.h"
#include "model/DeleteRuleResult.h"
#include "model/DeleteTargetsRequest.h"
#include "model/DeleteTargetsResult.h"
#include "model/DisableRuleRequest.h"
#include "model/DisableRuleResult.h"
#include "model/EnableRuleRequest.h"
#include "model/EnableRuleResult.h"
#include "model/GetApiDestinationRequest.h"
#include "model/GetApiDestinationResult.h"
#include "model/GetConnectionRequest.h"
#include "model/GetConnectionResult.h"
#include "model/GetEventBusRequest.h"
#include "model/GetEventBusResult.h"
#include "model/GetEventStreamingRequest.h"
#include "model/GetEventStreamingResult.h"
#include "model/GetRuleRequest.h"
#include "model/GetRuleResult.h"
#include "model/ListAliyunOfficialEventSourcesRequest.h"
#include "model/ListAliyunOfficialEventSourcesResult.h"
#include "model/ListApiDestinationsRequest.h"
#include "model/ListApiDestinationsResult.h"
#include "model/ListConnectionsRequest.h"
#include "model/ListConnectionsResult.h"
#include "model/ListEventBusesRequest.h"
#include "model/ListEventBusesResult.h"
#include "model/ListEventStreamingsRequest.h"
#include "model/ListEventStreamingsResult.h"
#include "model/ListRulesRequest.h"
#include "model/ListRulesResult.h"
#include "model/ListTargetsRequest.h"
#include "model/ListTargetsResult.h"
#include "model/ListUserDefinedEventSourcesRequest.h"
#include "model/ListUserDefinedEventSourcesResult.h"
#include "model/PauseEventStreamingRequest.h"
#include "model/PauseEventStreamingResult.h"
#include "model/PutTargetsRequest.h"
#include "model/PutTargetsResult.h"
#include "model/QueryEventRequest.h"
#include "model/QueryEventResult.h"
#include "model/QueryEventTracesRequest.h"
#include "model/QueryEventTracesResult.h"
#include "model/QueryTracedEventByEventIdRequest.h"
#include "model/QueryTracedEventByEventIdResult.h"
#include "model/QueryTracedEventsRequest.h"
#include "model/QueryTracedEventsResult.h"
#include "model/StartEventStreamingRequest.h"
#include "model/StartEventStreamingResult.h"
#include "model/TestEventPatternRequest.h"
#include "model/TestEventPatternResult.h"
#include "model/UpdateApiDestinationRequest.h"
#include "model/UpdateApiDestinationResult.h"
#include "model/UpdateConnectionRequest.h"
#include "model/UpdateConnectionResult.h"
#include "model/UpdateEventBusRequest.h"
#include "model/UpdateEventBusResult.h"
#include "model/UpdateEventSourceRequest.h"
#include "model/UpdateEventSourceResult.h"
#include "model/UpdateEventStreamingRequest.h"
#include "model/UpdateEventStreamingResult.h"
#include "model/UpdateRuleRequest.h"
#include "model/UpdateRuleResult.h"


namespace AlibabaCloud
{
	namespace Eventbridge
	{
		class ALIBABACLOUD_EVENTBRIDGE_EXPORT EventbridgeClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateApiDestinationResult> CreateApiDestinationOutcome;
			typedef std::future<CreateApiDestinationOutcome> CreateApiDestinationOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::CreateApiDestinationRequest&, const CreateApiDestinationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApiDestinationAsyncHandler;
			typedef Outcome<Error, Model::CreateConnectionResult> CreateConnectionOutcome;
			typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::CreateConnectionRequest&, const CreateConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConnectionAsyncHandler;
			typedef Outcome<Error, Model::CreateEventBusResult> CreateEventBusOutcome;
			typedef std::future<CreateEventBusOutcome> CreateEventBusOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::CreateEventBusRequest&, const CreateEventBusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEventBusAsyncHandler;
			typedef Outcome<Error, Model::CreateEventSourceResult> CreateEventSourceOutcome;
			typedef std::future<CreateEventSourceOutcome> CreateEventSourceOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::CreateEventSourceRequest&, const CreateEventSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEventSourceAsyncHandler;
			typedef Outcome<Error, Model::CreateEventStreamingResult> CreateEventStreamingOutcome;
			typedef std::future<CreateEventStreamingOutcome> CreateEventStreamingOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::CreateEventStreamingRequest&, const CreateEventStreamingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEventStreamingAsyncHandler;
			typedef Outcome<Error, Model::CreateRuleResult> CreateRuleOutcome;
			typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::CreateRuleRequest&, const CreateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceLinkedRoleForProductResult> CreateServiceLinkedRoleForProductOutcome;
			typedef std::future<CreateServiceLinkedRoleForProductOutcome> CreateServiceLinkedRoleForProductOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::CreateServiceLinkedRoleForProductRequest&, const CreateServiceLinkedRoleForProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceLinkedRoleForProductAsyncHandler;
			typedef Outcome<Error, Model::DeleteApiDestinationResult> DeleteApiDestinationOutcome;
			typedef std::future<DeleteApiDestinationOutcome> DeleteApiDestinationOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::DeleteApiDestinationRequest&, const DeleteApiDestinationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiDestinationAsyncHandler;
			typedef Outcome<Error, Model::DeleteConnectionResult> DeleteConnectionOutcome;
			typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::DeleteConnectionRequest&, const DeleteConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConnectionAsyncHandler;
			typedef Outcome<Error, Model::DeleteEventBusResult> DeleteEventBusOutcome;
			typedef std::future<DeleteEventBusOutcome> DeleteEventBusOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::DeleteEventBusRequest&, const DeleteEventBusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEventBusAsyncHandler;
			typedef Outcome<Error, Model::DeleteEventSourceResult> DeleteEventSourceOutcome;
			typedef std::future<DeleteEventSourceOutcome> DeleteEventSourceOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::DeleteEventSourceRequest&, const DeleteEventSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEventSourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteEventStreamingResult> DeleteEventStreamingOutcome;
			typedef std::future<DeleteEventStreamingOutcome> DeleteEventStreamingOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::DeleteEventStreamingRequest&, const DeleteEventStreamingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEventStreamingAsyncHandler;
			typedef Outcome<Error, Model::DeleteRuleResult> DeleteRuleOutcome;
			typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::DeleteRuleRequest&, const DeleteRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteTargetsResult> DeleteTargetsOutcome;
			typedef std::future<DeleteTargetsOutcome> DeleteTargetsOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::DeleteTargetsRequest&, const DeleteTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTargetsAsyncHandler;
			typedef Outcome<Error, Model::DisableRuleResult> DisableRuleOutcome;
			typedef std::future<DisableRuleOutcome> DisableRuleOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::DisableRuleRequest&, const DisableRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableRuleAsyncHandler;
			typedef Outcome<Error, Model::EnableRuleResult> EnableRuleOutcome;
			typedef std::future<EnableRuleOutcome> EnableRuleOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::EnableRuleRequest&, const EnableRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableRuleAsyncHandler;
			typedef Outcome<Error, Model::GetApiDestinationResult> GetApiDestinationOutcome;
			typedef std::future<GetApiDestinationOutcome> GetApiDestinationOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::GetApiDestinationRequest&, const GetApiDestinationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApiDestinationAsyncHandler;
			typedef Outcome<Error, Model::GetConnectionResult> GetConnectionOutcome;
			typedef std::future<GetConnectionOutcome> GetConnectionOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::GetConnectionRequest&, const GetConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConnectionAsyncHandler;
			typedef Outcome<Error, Model::GetEventBusResult> GetEventBusOutcome;
			typedef std::future<GetEventBusOutcome> GetEventBusOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::GetEventBusRequest&, const GetEventBusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEventBusAsyncHandler;
			typedef Outcome<Error, Model::GetEventStreamingResult> GetEventStreamingOutcome;
			typedef std::future<GetEventStreamingOutcome> GetEventStreamingOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::GetEventStreamingRequest&, const GetEventStreamingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEventStreamingAsyncHandler;
			typedef Outcome<Error, Model::GetRuleResult> GetRuleOutcome;
			typedef std::future<GetRuleOutcome> GetRuleOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::GetRuleRequest&, const GetRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRuleAsyncHandler;
			typedef Outcome<Error, Model::ListAliyunOfficialEventSourcesResult> ListAliyunOfficialEventSourcesOutcome;
			typedef std::future<ListAliyunOfficialEventSourcesOutcome> ListAliyunOfficialEventSourcesOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::ListAliyunOfficialEventSourcesRequest&, const ListAliyunOfficialEventSourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAliyunOfficialEventSourcesAsyncHandler;
			typedef Outcome<Error, Model::ListApiDestinationsResult> ListApiDestinationsOutcome;
			typedef std::future<ListApiDestinationsOutcome> ListApiDestinationsOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::ListApiDestinationsRequest&, const ListApiDestinationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApiDestinationsAsyncHandler;
			typedef Outcome<Error, Model::ListConnectionsResult> ListConnectionsOutcome;
			typedef std::future<ListConnectionsOutcome> ListConnectionsOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::ListConnectionsRequest&, const ListConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConnectionsAsyncHandler;
			typedef Outcome<Error, Model::ListEventBusesResult> ListEventBusesOutcome;
			typedef std::future<ListEventBusesOutcome> ListEventBusesOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::ListEventBusesRequest&, const ListEventBusesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEventBusesAsyncHandler;
			typedef Outcome<Error, Model::ListEventStreamingsResult> ListEventStreamingsOutcome;
			typedef std::future<ListEventStreamingsOutcome> ListEventStreamingsOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::ListEventStreamingsRequest&, const ListEventStreamingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEventStreamingsAsyncHandler;
			typedef Outcome<Error, Model::ListRulesResult> ListRulesOutcome;
			typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::ListRulesRequest&, const ListRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRulesAsyncHandler;
			typedef Outcome<Error, Model::ListTargetsResult> ListTargetsOutcome;
			typedef std::future<ListTargetsOutcome> ListTargetsOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::ListTargetsRequest&, const ListTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTargetsAsyncHandler;
			typedef Outcome<Error, Model::ListUserDefinedEventSourcesResult> ListUserDefinedEventSourcesOutcome;
			typedef std::future<ListUserDefinedEventSourcesOutcome> ListUserDefinedEventSourcesOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::ListUserDefinedEventSourcesRequest&, const ListUserDefinedEventSourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserDefinedEventSourcesAsyncHandler;
			typedef Outcome<Error, Model::PauseEventStreamingResult> PauseEventStreamingOutcome;
			typedef std::future<PauseEventStreamingOutcome> PauseEventStreamingOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::PauseEventStreamingRequest&, const PauseEventStreamingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PauseEventStreamingAsyncHandler;
			typedef Outcome<Error, Model::PutTargetsResult> PutTargetsOutcome;
			typedef std::future<PutTargetsOutcome> PutTargetsOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::PutTargetsRequest&, const PutTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutTargetsAsyncHandler;
			typedef Outcome<Error, Model::QueryEventResult> QueryEventOutcome;
			typedef std::future<QueryEventOutcome> QueryEventOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::QueryEventRequest&, const QueryEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEventAsyncHandler;
			typedef Outcome<Error, Model::QueryEventTracesResult> QueryEventTracesOutcome;
			typedef std::future<QueryEventTracesOutcome> QueryEventTracesOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::QueryEventTracesRequest&, const QueryEventTracesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEventTracesAsyncHandler;
			typedef Outcome<Error, Model::QueryTracedEventByEventIdResult> QueryTracedEventByEventIdOutcome;
			typedef std::future<QueryTracedEventByEventIdOutcome> QueryTracedEventByEventIdOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::QueryTracedEventByEventIdRequest&, const QueryTracedEventByEventIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTracedEventByEventIdAsyncHandler;
			typedef Outcome<Error, Model::QueryTracedEventsResult> QueryTracedEventsOutcome;
			typedef std::future<QueryTracedEventsOutcome> QueryTracedEventsOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::QueryTracedEventsRequest&, const QueryTracedEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTracedEventsAsyncHandler;
			typedef Outcome<Error, Model::StartEventStreamingResult> StartEventStreamingOutcome;
			typedef std::future<StartEventStreamingOutcome> StartEventStreamingOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::StartEventStreamingRequest&, const StartEventStreamingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartEventStreamingAsyncHandler;
			typedef Outcome<Error, Model::TestEventPatternResult> TestEventPatternOutcome;
			typedef std::future<TestEventPatternOutcome> TestEventPatternOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::TestEventPatternRequest&, const TestEventPatternOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestEventPatternAsyncHandler;
			typedef Outcome<Error, Model::UpdateApiDestinationResult> UpdateApiDestinationOutcome;
			typedef std::future<UpdateApiDestinationOutcome> UpdateApiDestinationOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::UpdateApiDestinationRequest&, const UpdateApiDestinationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApiDestinationAsyncHandler;
			typedef Outcome<Error, Model::UpdateConnectionResult> UpdateConnectionOutcome;
			typedef std::future<UpdateConnectionOutcome> UpdateConnectionOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::UpdateConnectionRequest&, const UpdateConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConnectionAsyncHandler;
			typedef Outcome<Error, Model::UpdateEventBusResult> UpdateEventBusOutcome;
			typedef std::future<UpdateEventBusOutcome> UpdateEventBusOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::UpdateEventBusRequest&, const UpdateEventBusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEventBusAsyncHandler;
			typedef Outcome<Error, Model::UpdateEventSourceResult> UpdateEventSourceOutcome;
			typedef std::future<UpdateEventSourceOutcome> UpdateEventSourceOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::UpdateEventSourceRequest&, const UpdateEventSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEventSourceAsyncHandler;
			typedef Outcome<Error, Model::UpdateEventStreamingResult> UpdateEventStreamingOutcome;
			typedef std::future<UpdateEventStreamingOutcome> UpdateEventStreamingOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::UpdateEventStreamingRequest&, const UpdateEventStreamingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEventStreamingAsyncHandler;
			typedef Outcome<Error, Model::UpdateRuleResult> UpdateRuleOutcome;
			typedef std::future<UpdateRuleOutcome> UpdateRuleOutcomeCallable;
			typedef std::function<void(const EventbridgeClient*, const Model::UpdateRuleRequest&, const UpdateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRuleAsyncHandler;

			EventbridgeClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EventbridgeClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EventbridgeClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EventbridgeClient();
			CreateApiDestinationOutcome createApiDestination(const Model::CreateApiDestinationRequest &request)const;
			void createApiDestinationAsync(const Model::CreateApiDestinationRequest& request, const CreateApiDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApiDestinationOutcomeCallable createApiDestinationCallable(const Model::CreateApiDestinationRequest& request) const;
			CreateConnectionOutcome createConnection(const Model::CreateConnectionRequest &request)const;
			void createConnectionAsync(const Model::CreateConnectionRequest& request, const CreateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConnectionOutcomeCallable createConnectionCallable(const Model::CreateConnectionRequest& request) const;
			CreateEventBusOutcome createEventBus(const Model::CreateEventBusRequest &request)const;
			void createEventBusAsync(const Model::CreateEventBusRequest& request, const CreateEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEventBusOutcomeCallable createEventBusCallable(const Model::CreateEventBusRequest& request) const;
			CreateEventSourceOutcome createEventSource(const Model::CreateEventSourceRequest &request)const;
			void createEventSourceAsync(const Model::CreateEventSourceRequest& request, const CreateEventSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEventSourceOutcomeCallable createEventSourceCallable(const Model::CreateEventSourceRequest& request) const;
			CreateEventStreamingOutcome createEventStreaming(const Model::CreateEventStreamingRequest &request)const;
			void createEventStreamingAsync(const Model::CreateEventStreamingRequest& request, const CreateEventStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEventStreamingOutcomeCallable createEventStreamingCallable(const Model::CreateEventStreamingRequest& request) const;
			CreateRuleOutcome createRule(const Model::CreateRuleRequest &request)const;
			void createRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRuleOutcomeCallable createRuleCallable(const Model::CreateRuleRequest& request) const;
			CreateServiceLinkedRoleForProductOutcome createServiceLinkedRoleForProduct(const Model::CreateServiceLinkedRoleForProductRequest &request)const;
			void createServiceLinkedRoleForProductAsync(const Model::CreateServiceLinkedRoleForProductRequest& request, const CreateServiceLinkedRoleForProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceLinkedRoleForProductOutcomeCallable createServiceLinkedRoleForProductCallable(const Model::CreateServiceLinkedRoleForProductRequest& request) const;
			DeleteApiDestinationOutcome deleteApiDestination(const Model::DeleteApiDestinationRequest &request)const;
			void deleteApiDestinationAsync(const Model::DeleteApiDestinationRequest& request, const DeleteApiDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApiDestinationOutcomeCallable deleteApiDestinationCallable(const Model::DeleteApiDestinationRequest& request) const;
			DeleteConnectionOutcome deleteConnection(const Model::DeleteConnectionRequest &request)const;
			void deleteConnectionAsync(const Model::DeleteConnectionRequest& request, const DeleteConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConnectionOutcomeCallable deleteConnectionCallable(const Model::DeleteConnectionRequest& request) const;
			DeleteEventBusOutcome deleteEventBus(const Model::DeleteEventBusRequest &request)const;
			void deleteEventBusAsync(const Model::DeleteEventBusRequest& request, const DeleteEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEventBusOutcomeCallable deleteEventBusCallable(const Model::DeleteEventBusRequest& request) const;
			DeleteEventSourceOutcome deleteEventSource(const Model::DeleteEventSourceRequest &request)const;
			void deleteEventSourceAsync(const Model::DeleteEventSourceRequest& request, const DeleteEventSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEventSourceOutcomeCallable deleteEventSourceCallable(const Model::DeleteEventSourceRequest& request) const;
			DeleteEventStreamingOutcome deleteEventStreaming(const Model::DeleteEventStreamingRequest &request)const;
			void deleteEventStreamingAsync(const Model::DeleteEventStreamingRequest& request, const DeleteEventStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEventStreamingOutcomeCallable deleteEventStreamingCallable(const Model::DeleteEventStreamingRequest& request) const;
			DeleteRuleOutcome deleteRule(const Model::DeleteRuleRequest &request)const;
			void deleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRuleOutcomeCallable deleteRuleCallable(const Model::DeleteRuleRequest& request) const;
			DeleteTargetsOutcome deleteTargets(const Model::DeleteTargetsRequest &request)const;
			void deleteTargetsAsync(const Model::DeleteTargetsRequest& request, const DeleteTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTargetsOutcomeCallable deleteTargetsCallable(const Model::DeleteTargetsRequest& request) const;
			DisableRuleOutcome disableRule(const Model::DisableRuleRequest &request)const;
			void disableRuleAsync(const Model::DisableRuleRequest& request, const DisableRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableRuleOutcomeCallable disableRuleCallable(const Model::DisableRuleRequest& request) const;
			EnableRuleOutcome enableRule(const Model::EnableRuleRequest &request)const;
			void enableRuleAsync(const Model::EnableRuleRequest& request, const EnableRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableRuleOutcomeCallable enableRuleCallable(const Model::EnableRuleRequest& request) const;
			GetApiDestinationOutcome getApiDestination(const Model::GetApiDestinationRequest &request)const;
			void getApiDestinationAsync(const Model::GetApiDestinationRequest& request, const GetApiDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApiDestinationOutcomeCallable getApiDestinationCallable(const Model::GetApiDestinationRequest& request) const;
			GetConnectionOutcome getConnection(const Model::GetConnectionRequest &request)const;
			void getConnectionAsync(const Model::GetConnectionRequest& request, const GetConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConnectionOutcomeCallable getConnectionCallable(const Model::GetConnectionRequest& request) const;
			GetEventBusOutcome getEventBus(const Model::GetEventBusRequest &request)const;
			void getEventBusAsync(const Model::GetEventBusRequest& request, const GetEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEventBusOutcomeCallable getEventBusCallable(const Model::GetEventBusRequest& request) const;
			GetEventStreamingOutcome getEventStreaming(const Model::GetEventStreamingRequest &request)const;
			void getEventStreamingAsync(const Model::GetEventStreamingRequest& request, const GetEventStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEventStreamingOutcomeCallable getEventStreamingCallable(const Model::GetEventStreamingRequest& request) const;
			GetRuleOutcome getRule(const Model::GetRuleRequest &request)const;
			void getRuleAsync(const Model::GetRuleRequest& request, const GetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRuleOutcomeCallable getRuleCallable(const Model::GetRuleRequest& request) const;
			ListAliyunOfficialEventSourcesOutcome listAliyunOfficialEventSources(const Model::ListAliyunOfficialEventSourcesRequest &request)const;
			void listAliyunOfficialEventSourcesAsync(const Model::ListAliyunOfficialEventSourcesRequest& request, const ListAliyunOfficialEventSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAliyunOfficialEventSourcesOutcomeCallable listAliyunOfficialEventSourcesCallable(const Model::ListAliyunOfficialEventSourcesRequest& request) const;
			ListApiDestinationsOutcome listApiDestinations(const Model::ListApiDestinationsRequest &request)const;
			void listApiDestinationsAsync(const Model::ListApiDestinationsRequest& request, const ListApiDestinationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApiDestinationsOutcomeCallable listApiDestinationsCallable(const Model::ListApiDestinationsRequest& request) const;
			ListConnectionsOutcome listConnections(const Model::ListConnectionsRequest &request)const;
			void listConnectionsAsync(const Model::ListConnectionsRequest& request, const ListConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConnectionsOutcomeCallable listConnectionsCallable(const Model::ListConnectionsRequest& request) const;
			ListEventBusesOutcome listEventBuses(const Model::ListEventBusesRequest &request)const;
			void listEventBusesAsync(const Model::ListEventBusesRequest& request, const ListEventBusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEventBusesOutcomeCallable listEventBusesCallable(const Model::ListEventBusesRequest& request) const;
			ListEventStreamingsOutcome listEventStreamings(const Model::ListEventStreamingsRequest &request)const;
			void listEventStreamingsAsync(const Model::ListEventStreamingsRequest& request, const ListEventStreamingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEventStreamingsOutcomeCallable listEventStreamingsCallable(const Model::ListEventStreamingsRequest& request) const;
			ListRulesOutcome listRules(const Model::ListRulesRequest &request)const;
			void listRulesAsync(const Model::ListRulesRequest& request, const ListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRulesOutcomeCallable listRulesCallable(const Model::ListRulesRequest& request) const;
			ListTargetsOutcome listTargets(const Model::ListTargetsRequest &request)const;
			void listTargetsAsync(const Model::ListTargetsRequest& request, const ListTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTargetsOutcomeCallable listTargetsCallable(const Model::ListTargetsRequest& request) const;
			ListUserDefinedEventSourcesOutcome listUserDefinedEventSources(const Model::ListUserDefinedEventSourcesRequest &request)const;
			void listUserDefinedEventSourcesAsync(const Model::ListUserDefinedEventSourcesRequest& request, const ListUserDefinedEventSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserDefinedEventSourcesOutcomeCallable listUserDefinedEventSourcesCallable(const Model::ListUserDefinedEventSourcesRequest& request) const;
			PauseEventStreamingOutcome pauseEventStreaming(const Model::PauseEventStreamingRequest &request)const;
			void pauseEventStreamingAsync(const Model::PauseEventStreamingRequest& request, const PauseEventStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PauseEventStreamingOutcomeCallable pauseEventStreamingCallable(const Model::PauseEventStreamingRequest& request) const;
			PutTargetsOutcome putTargets(const Model::PutTargetsRequest &request)const;
			void putTargetsAsync(const Model::PutTargetsRequest& request, const PutTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutTargetsOutcomeCallable putTargetsCallable(const Model::PutTargetsRequest& request) const;
			QueryEventOutcome queryEvent(const Model::QueryEventRequest &request)const;
			void queryEventAsync(const Model::QueryEventRequest& request, const QueryEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEventOutcomeCallable queryEventCallable(const Model::QueryEventRequest& request) const;
			QueryEventTracesOutcome queryEventTraces(const Model::QueryEventTracesRequest &request)const;
			void queryEventTracesAsync(const Model::QueryEventTracesRequest& request, const QueryEventTracesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEventTracesOutcomeCallable queryEventTracesCallable(const Model::QueryEventTracesRequest& request) const;
			QueryTracedEventByEventIdOutcome queryTracedEventByEventId(const Model::QueryTracedEventByEventIdRequest &request)const;
			void queryTracedEventByEventIdAsync(const Model::QueryTracedEventByEventIdRequest& request, const QueryTracedEventByEventIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTracedEventByEventIdOutcomeCallable queryTracedEventByEventIdCallable(const Model::QueryTracedEventByEventIdRequest& request) const;
			QueryTracedEventsOutcome queryTracedEvents(const Model::QueryTracedEventsRequest &request)const;
			void queryTracedEventsAsync(const Model::QueryTracedEventsRequest& request, const QueryTracedEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTracedEventsOutcomeCallable queryTracedEventsCallable(const Model::QueryTracedEventsRequest& request) const;
			StartEventStreamingOutcome startEventStreaming(const Model::StartEventStreamingRequest &request)const;
			void startEventStreamingAsync(const Model::StartEventStreamingRequest& request, const StartEventStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartEventStreamingOutcomeCallable startEventStreamingCallable(const Model::StartEventStreamingRequest& request) const;
			TestEventPatternOutcome testEventPattern(const Model::TestEventPatternRequest &request)const;
			void testEventPatternAsync(const Model::TestEventPatternRequest& request, const TestEventPatternAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestEventPatternOutcomeCallable testEventPatternCallable(const Model::TestEventPatternRequest& request) const;
			UpdateApiDestinationOutcome updateApiDestination(const Model::UpdateApiDestinationRequest &request)const;
			void updateApiDestinationAsync(const Model::UpdateApiDestinationRequest& request, const UpdateApiDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApiDestinationOutcomeCallable updateApiDestinationCallable(const Model::UpdateApiDestinationRequest& request) const;
			UpdateConnectionOutcome updateConnection(const Model::UpdateConnectionRequest &request)const;
			void updateConnectionAsync(const Model::UpdateConnectionRequest& request, const UpdateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConnectionOutcomeCallable updateConnectionCallable(const Model::UpdateConnectionRequest& request) const;
			UpdateEventBusOutcome updateEventBus(const Model::UpdateEventBusRequest &request)const;
			void updateEventBusAsync(const Model::UpdateEventBusRequest& request, const UpdateEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEventBusOutcomeCallable updateEventBusCallable(const Model::UpdateEventBusRequest& request) const;
			UpdateEventSourceOutcome updateEventSource(const Model::UpdateEventSourceRequest &request)const;
			void updateEventSourceAsync(const Model::UpdateEventSourceRequest& request, const UpdateEventSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEventSourceOutcomeCallable updateEventSourceCallable(const Model::UpdateEventSourceRequest& request) const;
			UpdateEventStreamingOutcome updateEventStreaming(const Model::UpdateEventStreamingRequest &request)const;
			void updateEventStreamingAsync(const Model::UpdateEventStreamingRequest& request, const UpdateEventStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEventStreamingOutcomeCallable updateEventStreamingCallable(const Model::UpdateEventStreamingRequest& request) const;
			UpdateRuleOutcome updateRule(const Model::UpdateRuleRequest &request)const;
			void updateRuleAsync(const Model::UpdateRuleRequest& request, const UpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRuleOutcomeCallable updateRuleCallable(const Model::UpdateRuleRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EVENTBRIDGE_EVENTBRIDGECLIENT_H_
