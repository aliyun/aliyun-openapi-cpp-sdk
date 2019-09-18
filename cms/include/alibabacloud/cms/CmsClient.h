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

#ifndef ALIBABACLOUD_CMS_CMSCLIENT_H_
#define ALIBABACLOUD_CMS_CMSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CmsExport.h"
#include "model/AccessKeyGetRequest.h"
#include "model/AccessKeyGetResult.h"
#include "model/AddMyGroupInstancesRequest.h"
#include "model/AddMyGroupInstancesResult.h"
#include "model/ApplyMonitoringTemplateRequest.h"
#include "model/ApplyMonitoringTemplateResult.h"
#include "model/ApplyTemplateRequest.h"
#include "model/ApplyTemplateResult.h"
#include "model/CreateAlarmRequest.h"
#include "model/CreateAlarmResult.h"
#include "model/CreateMonitoringTemplateRequest.h"
#include "model/CreateMonitoringTemplateResult.h"
#include "model/CreateMyGroupAlertBatchRequest.h"
#include "model/CreateMyGroupAlertBatchResult.h"
#include "model/CreateMyGroupsRequest.h"
#include "model/CreateMyGroupsResult.h"
#include "model/CreateNotifyPolicyRequest.h"
#include "model/CreateNotifyPolicyResult.h"
#include "model/CreateTaskRequest.h"
#include "model/CreateTaskResult.h"
#include "model/DeleteAlarmRequest.h"
#include "model/DeleteAlarmResult.h"
#include "model/DeleteCustomMetricRequest.h"
#include "model/DeleteCustomMetricResult.h"
#include "model/DeleteEventRuleRequest.h"
#include "model/DeleteEventRuleResult.h"
#include "model/DeleteEventTargetsRequest.h"
#include "model/DeleteEventTargetsResult.h"
#include "model/DeleteGroupDynamicRuleRequest.h"
#include "model/DeleteGroupDynamicRuleResult.h"
#include "model/DeleteMonitoringTemplateRequest.h"
#include "model/DeleteMonitoringTemplateResult.h"
#include "model/DeleteMyGroupInstancesRequest.h"
#include "model/DeleteMyGroupInstancesResult.h"
#include "model/DeleteMyGroupsRequest.h"
#include "model/DeleteMyGroupsResult.h"
#include "model/DeleteNotifyPolicyRequest.h"
#include "model/DeleteNotifyPolicyResult.h"
#include "model/DeleteTasksRequest.h"
#include "model/DeleteTasksResult.h"
#include "model/DescribeAlarmHistoryRequest.h"
#include "model/DescribeAlarmHistoryResult.h"
#include "model/DescribeAlarmsRequest.h"
#include "model/DescribeAlarmsResult.h"
#include "model/DescribeAlarmsForResourcesRequest.h"
#include "model/DescribeAlarmsForResourcesResult.h"
#include "model/DescribeAlertHistoryListRequest.h"
#include "model/DescribeAlertHistoryListResult.h"
#include "model/DescribeContactRequest.h"
#include "model/DescribeContactResult.h"
#include "model/DescribeEventRuleRequest.h"
#include "model/DescribeEventRuleResult.h"
#include "model/DescribeISPAreaCityRequest.h"
#include "model/DescribeISPAreaCityResult.h"
#include "model/DescribeMetricRuleTargetsRequest.h"
#include "model/DescribeMetricRuleTargetsResult.h"
#include "model/DescribeSiteMonitorISPAreaCityRequest.h"
#include "model/DescribeSiteMonitorISPAreaCityResult.h"
#include "model/DescribeSiteMonitorISPCityListRequest.h"
#include "model/DescribeSiteMonitorISPCityListResult.h"
#include "model/DescribeTaskDetailRequest.h"
#include "model/DescribeTaskDetailResult.h"
#include "model/DescribeTasksRequest.h"
#include "model/DescribeTasksResult.h"
#include "model/DisableActiveAlertRequest.h"
#include "model/DisableActiveAlertResult.h"
#include "model/DisableAlarmRequest.h"
#include "model/DisableAlarmResult.h"
#include "model/DisableEventRuleRequest.h"
#include "model/DisableEventRuleResult.h"
#include "model/EnableActiveAlertRequest.h"
#include "model/EnableActiveAlertResult.h"
#include "model/EnableAlarmRequest.h"
#include "model/EnableAlarmResult.h"
#include "model/EnableEventRuleRequest.h"
#include "model/EnableEventRuleResult.h"
#include "model/GetContactsRequest.h"
#include "model/GetContactsResult.h"
#include "model/GetMonitoringTemplateRequest.h"
#include "model/GetMonitoringTemplateResult.h"
#include "model/GetMyGroupAlertRequest.h"
#include "model/GetMyGroupAlertResult.h"
#include "model/GetMyGroupsRequest.h"
#include "model/GetMyGroupsResult.h"
#include "model/GetNotifyPolicyRequest.h"
#include "model/GetNotifyPolicyResult.h"
#include "model/ListActiveAlertRuleRequest.h"
#include "model/ListActiveAlertRuleResult.h"
#include "model/ListAlarmRequest.h"
#include "model/ListAlarmResult.h"
#include "model/ListAlarmHistoryRequest.h"
#include "model/ListAlarmHistoryResult.h"
#include "model/ListContactGroupRequest.h"
#include "model/ListContactGroupResult.h"
#include "model/ListEventRulesRequest.h"
#include "model/ListEventRulesResult.h"
#include "model/ListEventTargetsByRuleRequest.h"
#include "model/ListEventTargetsByRuleResult.h"
#include "model/ListGroupDynamicRuleRequest.h"
#include "model/ListGroupDynamicRuleResult.h"
#include "model/ListMonitoringTemplatesRequest.h"
#include "model/ListMonitoringTemplatesResult.h"
#include "model/ListMyGroupCategoriesRequest.h"
#include "model/ListMyGroupCategoriesResult.h"
#include "model/ListMyGroupInstancesRequest.h"
#include "model/ListMyGroupInstancesResult.h"
#include "model/ListMyGroupInstancesDetailsRequest.h"
#include "model/ListMyGroupInstancesDetailsResult.h"
#include "model/ListMyGroupsRequest.h"
#include "model/ListMyGroupsResult.h"
#include "model/ListNotifyPolicyRequest.h"
#include "model/ListNotifyPolicyResult.h"
#include "model/ListProductOfActiveAlertRequest.h"
#include "model/ListProductOfActiveAlertResult.h"
#include "model/ModifyTaskRequest.h"
#include "model/ModifyTaskResult.h"
#include "model/NodeInstallRequest.h"
#include "model/NodeInstallResult.h"
#include "model/NodeListRequest.h"
#include "model/NodeListResult.h"
#include "model/NodeProcessCreateRequest.h"
#include "model/NodeProcessCreateResult.h"
#include "model/NodeProcessDeleteRequest.h"
#include "model/NodeProcessDeleteResult.h"
#include "model/NodeProcessesRequest.h"
#include "model/NodeProcessesResult.h"
#include "model/NodeStatusRequest.h"
#include "model/NodeStatusResult.h"
#include "model/NodeStatusListRequest.h"
#include "model/NodeStatusListResult.h"
#include "model/NodeUninstallRequest.h"
#include "model/NodeUninstallResult.h"
#include "model/ProfileGetRequest.h"
#include "model/ProfileGetResult.h"
#include "model/ProfileSetRequest.h"
#include "model/ProfileSetResult.h"
#include "model/PutCustomMetricRequest.h"
#include "model/PutCustomMetricResult.h"
#include "model/PutEventRequest.h"
#include "model/PutEventResult.h"
#include "model/PutEventRuleRequest.h"
#include "model/PutEventRuleResult.h"
#include "model/PutEventTargetsRequest.h"
#include "model/PutEventTargetsResult.h"
#include "model/PutGroupDynamicRuleRequest.h"
#include "model/PutGroupDynamicRuleResult.h"
#include "model/PutMetricAlarmRequest.h"
#include "model/PutMetricAlarmResult.h"
#include "model/PutMetricRuleTargetsRequest.h"
#include "model/PutMetricRuleTargetsResult.h"
#include "model/QueryCustomEventCountRequest.h"
#include "model/QueryCustomEventCountResult.h"
#include "model/QueryCustomEventDetailRequest.h"
#include "model/QueryCustomEventDetailResult.h"
#include "model/QueryCustomEventHistogramRequest.h"
#include "model/QueryCustomEventHistogramResult.h"
#include "model/QueryCustomMetricListRequest.h"
#include "model/QueryCustomMetricListResult.h"
#include "model/QueryErrorDistributionRequest.h"
#include "model/QueryErrorDistributionResult.h"
#include "model/QueryMetricDataRequest.h"
#include "model/QueryMetricDataResult.h"
#include "model/QueryMetricLastRequest.h"
#include "model/QueryMetricLastResult.h"
#include "model/QueryMetricListRequest.h"
#include "model/QueryMetricListResult.h"
#include "model/QueryMetricMetaRequest.h"
#include "model/QueryMetricMetaResult.h"
#include "model/QueryMetricTopRequest.h"
#include "model/QueryMetricTopResult.h"
#include "model/QueryMonitorDataRequest.h"
#include "model/QueryMonitorDataResult.h"
#include "model/QueryProjectMetaRequest.h"
#include "model/QueryProjectMetaResult.h"
#include "model/QueryStaticsAvailabilityRequest.h"
#include "model/QueryStaticsAvailabilityResult.h"
#include "model/QueryStaticsErrorRateRequest.h"
#include "model/QueryStaticsErrorRateResult.h"
#include "model/QueryStaticsResponseTimeRequest.h"
#include "model/QueryStaticsResponseTimeResult.h"
#include "model/QuerySystemEventCountRequest.h"
#include "model/QuerySystemEventCountResult.h"
#include "model/QuerySystemEventDemoRequest.h"
#include "model/QuerySystemEventDemoResult.h"
#include "model/QuerySystemEventDetailRequest.h"
#include "model/QuerySystemEventDetailResult.h"
#include "model/QuerySystemEventHistogramRequest.h"
#include "model/QuerySystemEventHistogramResult.h"
#include "model/QueryTaskConfigRequest.h"
#include "model/QueryTaskConfigResult.h"
#include "model/QueryTaskMonitorDataRequest.h"
#include "model/QueryTaskMonitorDataResult.h"
#include "model/RemoveMetricRuleTargetsRequest.h"
#include "model/RemoveMetricRuleTargetsResult.h"
#include "model/SendDryRunSystemEventRequest.h"
#include "model/SendDryRunSystemEventResult.h"
#include "model/StartTasksRequest.h"
#include "model/StartTasksResult.h"
#include "model/StopTasksRequest.h"
#include "model/StopTasksResult.h"
#include "model/TaskConfigCreateRequest.h"
#include "model/TaskConfigCreateResult.h"
#include "model/TaskConfigDeleteRequest.h"
#include "model/TaskConfigDeleteResult.h"
#include "model/TaskConfigEnableRequest.h"
#include "model/TaskConfigEnableResult.h"
#include "model/TaskConfigListRequest.h"
#include "model/TaskConfigListResult.h"
#include "model/TaskConfigModifyRequest.h"
#include "model/TaskConfigModifyResult.h"
#include "model/TaskConfigUnhealthyRequest.h"
#include "model/TaskConfigUnhealthyResult.h"
#include "model/UpdateAlarmRequest.h"
#include "model/UpdateAlarmResult.h"
#include "model/UpdateMonitoringTemplateRequest.h"
#include "model/UpdateMonitoringTemplateResult.h"
#include "model/UpdateMyGroupAlertRequest.h"
#include "model/UpdateMyGroupAlertResult.h"
#include "model/UpdateMyGroupInstancesRequest.h"
#include "model/UpdateMyGroupInstancesResult.h"
#include "model/UpdateMyGroupMembersRequest.h"
#include "model/UpdateMyGroupMembersResult.h"
#include "model/UpdateMyGroupsRequest.h"
#include "model/UpdateMyGroupsResult.h"


namespace AlibabaCloud
{
	namespace Cms
	{
		class ALIBABACLOUD_CMS_EXPORT CmsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AccessKeyGetResult> AccessKeyGetOutcome;
			typedef std::future<AccessKeyGetOutcome> AccessKeyGetOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::AccessKeyGetRequest&, const AccessKeyGetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AccessKeyGetAsyncHandler;
			typedef Outcome<Error, Model::AddMyGroupInstancesResult> AddMyGroupInstancesOutcome;
			typedef std::future<AddMyGroupInstancesOutcome> AddMyGroupInstancesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::AddMyGroupInstancesRequest&, const AddMyGroupInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMyGroupInstancesAsyncHandler;
			typedef Outcome<Error, Model::ApplyMonitoringTemplateResult> ApplyMonitoringTemplateOutcome;
			typedef std::future<ApplyMonitoringTemplateOutcome> ApplyMonitoringTemplateOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ApplyMonitoringTemplateRequest&, const ApplyMonitoringTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyMonitoringTemplateAsyncHandler;
			typedef Outcome<Error, Model::ApplyTemplateResult> ApplyTemplateOutcome;
			typedef std::future<ApplyTemplateOutcome> ApplyTemplateOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ApplyTemplateRequest&, const ApplyTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateAlarmResult> CreateAlarmOutcome;
			typedef std::future<CreateAlarmOutcome> CreateAlarmOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateAlarmRequest&, const CreateAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmAsyncHandler;
			typedef Outcome<Error, Model::CreateMonitoringTemplateResult> CreateMonitoringTemplateOutcome;
			typedef std::future<CreateMonitoringTemplateOutcome> CreateMonitoringTemplateOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateMonitoringTemplateRequest&, const CreateMonitoringTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMonitoringTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateMyGroupAlertBatchResult> CreateMyGroupAlertBatchOutcome;
			typedef std::future<CreateMyGroupAlertBatchOutcome> CreateMyGroupAlertBatchOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateMyGroupAlertBatchRequest&, const CreateMyGroupAlertBatchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMyGroupAlertBatchAsyncHandler;
			typedef Outcome<Error, Model::CreateMyGroupsResult> CreateMyGroupsOutcome;
			typedef std::future<CreateMyGroupsOutcome> CreateMyGroupsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateMyGroupsRequest&, const CreateMyGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMyGroupsAsyncHandler;
			typedef Outcome<Error, Model::CreateNotifyPolicyResult> CreateNotifyPolicyOutcome;
			typedef std::future<CreateNotifyPolicyOutcome> CreateNotifyPolicyOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateNotifyPolicyRequest&, const CreateNotifyPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotifyPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateTaskResult> CreateTaskOutcome;
			typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateTaskRequest&, const CreateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteAlarmResult> DeleteAlarmOutcome;
			typedef std::future<DeleteAlarmOutcome> DeleteAlarmOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteAlarmRequest&, const DeleteAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomMetricResult> DeleteCustomMetricOutcome;
			typedef std::future<DeleteCustomMetricOutcome> DeleteCustomMetricOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteCustomMetricRequest&, const DeleteCustomMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomMetricAsyncHandler;
			typedef Outcome<Error, Model::DeleteEventRuleResult> DeleteEventRuleOutcome;
			typedef std::future<DeleteEventRuleOutcome> DeleteEventRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteEventRuleRequest&, const DeleteEventRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEventRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteEventTargetsResult> DeleteEventTargetsOutcome;
			typedef std::future<DeleteEventTargetsOutcome> DeleteEventTargetsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteEventTargetsRequest&, const DeleteEventTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEventTargetsAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupDynamicRuleResult> DeleteGroupDynamicRuleOutcome;
			typedef std::future<DeleteGroupDynamicRuleOutcome> DeleteGroupDynamicRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteGroupDynamicRuleRequest&, const DeleteGroupDynamicRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupDynamicRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteMonitoringTemplateResult> DeleteMonitoringTemplateOutcome;
			typedef std::future<DeleteMonitoringTemplateOutcome> DeleteMonitoringTemplateOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteMonitoringTemplateRequest&, const DeleteMonitoringTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMonitoringTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteMyGroupInstancesResult> DeleteMyGroupInstancesOutcome;
			typedef std::future<DeleteMyGroupInstancesOutcome> DeleteMyGroupInstancesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteMyGroupInstancesRequest&, const DeleteMyGroupInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMyGroupInstancesAsyncHandler;
			typedef Outcome<Error, Model::DeleteMyGroupsResult> DeleteMyGroupsOutcome;
			typedef std::future<DeleteMyGroupsOutcome> DeleteMyGroupsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteMyGroupsRequest&, const DeleteMyGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMyGroupsAsyncHandler;
			typedef Outcome<Error, Model::DeleteNotifyPolicyResult> DeleteNotifyPolicyOutcome;
			typedef std::future<DeleteNotifyPolicyOutcome> DeleteNotifyPolicyOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteNotifyPolicyRequest&, const DeleteNotifyPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNotifyPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteTasksResult> DeleteTasksOutcome;
			typedef std::future<DeleteTasksOutcome> DeleteTasksOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteTasksRequest&, const DeleteTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmHistoryResult> DescribeAlarmHistoryOutcome;
			typedef std::future<DescribeAlarmHistoryOutcome> DescribeAlarmHistoryOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeAlarmHistoryRequest&, const DescribeAlarmHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmsResult> DescribeAlarmsOutcome;
			typedef std::future<DescribeAlarmsOutcome> DescribeAlarmsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeAlarmsRequest&, const DescribeAlarmsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmsForResourcesResult> DescribeAlarmsForResourcesOutcome;
			typedef std::future<DescribeAlarmsForResourcesOutcome> DescribeAlarmsForResourcesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeAlarmsForResourcesRequest&, const DescribeAlarmsForResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmsForResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertHistoryListResult> DescribeAlertHistoryListOutcome;
			typedef std::future<DescribeAlertHistoryListOutcome> DescribeAlertHistoryListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeAlertHistoryListRequest&, const DescribeAlertHistoryListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertHistoryListAsyncHandler;
			typedef Outcome<Error, Model::DescribeContactResult> DescribeContactOutcome;
			typedef std::future<DescribeContactOutcome> DescribeContactOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeContactRequest&, const DescribeContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContactAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventRuleResult> DescribeEventRuleOutcome;
			typedef std::future<DescribeEventRuleOutcome> DescribeEventRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeEventRuleRequest&, const DescribeEventRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeISPAreaCityResult> DescribeISPAreaCityOutcome;
			typedef std::future<DescribeISPAreaCityOutcome> DescribeISPAreaCityOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeISPAreaCityRequest&, const DescribeISPAreaCityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeISPAreaCityAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetricRuleTargetsResult> DescribeMetricRuleTargetsOutcome;
			typedef std::future<DescribeMetricRuleTargetsOutcome> DescribeMetricRuleTargetsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMetricRuleTargetsRequest&, const DescribeMetricRuleTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricRuleTargetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSiteMonitorISPAreaCityResult> DescribeSiteMonitorISPAreaCityOutcome;
			typedef std::future<DescribeSiteMonitorISPAreaCityOutcome> DescribeSiteMonitorISPAreaCityOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeSiteMonitorISPAreaCityRequest&, const DescribeSiteMonitorISPAreaCityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSiteMonitorISPAreaCityAsyncHandler;
			typedef Outcome<Error, Model::DescribeSiteMonitorISPCityListResult> DescribeSiteMonitorISPCityListOutcome;
			typedef std::future<DescribeSiteMonitorISPCityListOutcome> DescribeSiteMonitorISPCityListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeSiteMonitorISPCityListRequest&, const DescribeSiteMonitorISPCityListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSiteMonitorISPCityListAsyncHandler;
			typedef Outcome<Error, Model::DescribeTaskDetailResult> DescribeTaskDetailOutcome;
			typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeTaskDetailRequest&, const DescribeTaskDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeTasksResult> DescribeTasksOutcome;
			typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeTasksRequest&, const DescribeTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
			typedef Outcome<Error, Model::DisableActiveAlertResult> DisableActiveAlertOutcome;
			typedef std::future<DisableActiveAlertOutcome> DisableActiveAlertOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DisableActiveAlertRequest&, const DisableActiveAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableActiveAlertAsyncHandler;
			typedef Outcome<Error, Model::DisableAlarmResult> DisableAlarmOutcome;
			typedef std::future<DisableAlarmOutcome> DisableAlarmOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DisableAlarmRequest&, const DisableAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableAlarmAsyncHandler;
			typedef Outcome<Error, Model::DisableEventRuleResult> DisableEventRuleOutcome;
			typedef std::future<DisableEventRuleOutcome> DisableEventRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DisableEventRuleRequest&, const DisableEventRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableEventRuleAsyncHandler;
			typedef Outcome<Error, Model::EnableActiveAlertResult> EnableActiveAlertOutcome;
			typedef std::future<EnableActiveAlertOutcome> EnableActiveAlertOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::EnableActiveAlertRequest&, const EnableActiveAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableActiveAlertAsyncHandler;
			typedef Outcome<Error, Model::EnableAlarmResult> EnableAlarmOutcome;
			typedef std::future<EnableAlarmOutcome> EnableAlarmOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::EnableAlarmRequest&, const EnableAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableAlarmAsyncHandler;
			typedef Outcome<Error, Model::EnableEventRuleResult> EnableEventRuleOutcome;
			typedef std::future<EnableEventRuleOutcome> EnableEventRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::EnableEventRuleRequest&, const EnableEventRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableEventRuleAsyncHandler;
			typedef Outcome<Error, Model::GetContactsResult> GetContactsOutcome;
			typedef std::future<GetContactsOutcome> GetContactsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::GetContactsRequest&, const GetContactsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetContactsAsyncHandler;
			typedef Outcome<Error, Model::GetMonitoringTemplateResult> GetMonitoringTemplateOutcome;
			typedef std::future<GetMonitoringTemplateOutcome> GetMonitoringTemplateOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::GetMonitoringTemplateRequest&, const GetMonitoringTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMonitoringTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetMyGroupAlertResult> GetMyGroupAlertOutcome;
			typedef std::future<GetMyGroupAlertOutcome> GetMyGroupAlertOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::GetMyGroupAlertRequest&, const GetMyGroupAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMyGroupAlertAsyncHandler;
			typedef Outcome<Error, Model::GetMyGroupsResult> GetMyGroupsOutcome;
			typedef std::future<GetMyGroupsOutcome> GetMyGroupsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::GetMyGroupsRequest&, const GetMyGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMyGroupsAsyncHandler;
			typedef Outcome<Error, Model::GetNotifyPolicyResult> GetNotifyPolicyOutcome;
			typedef std::future<GetNotifyPolicyOutcome> GetNotifyPolicyOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::GetNotifyPolicyRequest&, const GetNotifyPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNotifyPolicyAsyncHandler;
			typedef Outcome<Error, Model::ListActiveAlertRuleResult> ListActiveAlertRuleOutcome;
			typedef std::future<ListActiveAlertRuleOutcome> ListActiveAlertRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ListActiveAlertRuleRequest&, const ListActiveAlertRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListActiveAlertRuleAsyncHandler;
			typedef Outcome<Error, Model::ListAlarmResult> ListAlarmOutcome;
			typedef std::future<ListAlarmOutcome> ListAlarmOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ListAlarmRequest&, const ListAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlarmAsyncHandler;
			typedef Outcome<Error, Model::ListAlarmHistoryResult> ListAlarmHistoryOutcome;
			typedef std::future<ListAlarmHistoryOutcome> ListAlarmHistoryOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ListAlarmHistoryRequest&, const ListAlarmHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlarmHistoryAsyncHandler;
			typedef Outcome<Error, Model::ListContactGroupResult> ListContactGroupOutcome;
			typedef std::future<ListContactGroupOutcome> ListContactGroupOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ListContactGroupRequest&, const ListContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListContactGroupAsyncHandler;
			typedef Outcome<Error, Model::ListEventRulesResult> ListEventRulesOutcome;
			typedef std::future<ListEventRulesOutcome> ListEventRulesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ListEventRulesRequest&, const ListEventRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEventRulesAsyncHandler;
			typedef Outcome<Error, Model::ListEventTargetsByRuleResult> ListEventTargetsByRuleOutcome;
			typedef std::future<ListEventTargetsByRuleOutcome> ListEventTargetsByRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ListEventTargetsByRuleRequest&, const ListEventTargetsByRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEventTargetsByRuleAsyncHandler;
			typedef Outcome<Error, Model::ListGroupDynamicRuleResult> ListGroupDynamicRuleOutcome;
			typedef std::future<ListGroupDynamicRuleOutcome> ListGroupDynamicRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ListGroupDynamicRuleRequest&, const ListGroupDynamicRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupDynamicRuleAsyncHandler;
			typedef Outcome<Error, Model::ListMonitoringTemplatesResult> ListMonitoringTemplatesOutcome;
			typedef std::future<ListMonitoringTemplatesOutcome> ListMonitoringTemplatesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ListMonitoringTemplatesRequest&, const ListMonitoringTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMonitoringTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListMyGroupCategoriesResult> ListMyGroupCategoriesOutcome;
			typedef std::future<ListMyGroupCategoriesOutcome> ListMyGroupCategoriesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ListMyGroupCategoriesRequest&, const ListMyGroupCategoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMyGroupCategoriesAsyncHandler;
			typedef Outcome<Error, Model::ListMyGroupInstancesResult> ListMyGroupInstancesOutcome;
			typedef std::future<ListMyGroupInstancesOutcome> ListMyGroupInstancesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ListMyGroupInstancesRequest&, const ListMyGroupInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMyGroupInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListMyGroupInstancesDetailsResult> ListMyGroupInstancesDetailsOutcome;
			typedef std::future<ListMyGroupInstancesDetailsOutcome> ListMyGroupInstancesDetailsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ListMyGroupInstancesDetailsRequest&, const ListMyGroupInstancesDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMyGroupInstancesDetailsAsyncHandler;
			typedef Outcome<Error, Model::ListMyGroupsResult> ListMyGroupsOutcome;
			typedef std::future<ListMyGroupsOutcome> ListMyGroupsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ListMyGroupsRequest&, const ListMyGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMyGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListNotifyPolicyResult> ListNotifyPolicyOutcome;
			typedef std::future<ListNotifyPolicyOutcome> ListNotifyPolicyOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ListNotifyPolicyRequest&, const ListNotifyPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNotifyPolicyAsyncHandler;
			typedef Outcome<Error, Model::ListProductOfActiveAlertResult> ListProductOfActiveAlertOutcome;
			typedef std::future<ListProductOfActiveAlertOutcome> ListProductOfActiveAlertOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ListProductOfActiveAlertRequest&, const ListProductOfActiveAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProductOfActiveAlertAsyncHandler;
			typedef Outcome<Error, Model::ModifyTaskResult> ModifyTaskOutcome;
			typedef std::future<ModifyTaskOutcome> ModifyTaskOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ModifyTaskRequest&, const ModifyTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskAsyncHandler;
			typedef Outcome<Error, Model::NodeInstallResult> NodeInstallOutcome;
			typedef std::future<NodeInstallOutcome> NodeInstallOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::NodeInstallRequest&, const NodeInstallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeInstallAsyncHandler;
			typedef Outcome<Error, Model::NodeListResult> NodeListOutcome;
			typedef std::future<NodeListOutcome> NodeListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::NodeListRequest&, const NodeListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeListAsyncHandler;
			typedef Outcome<Error, Model::NodeProcessCreateResult> NodeProcessCreateOutcome;
			typedef std::future<NodeProcessCreateOutcome> NodeProcessCreateOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::NodeProcessCreateRequest&, const NodeProcessCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeProcessCreateAsyncHandler;
			typedef Outcome<Error, Model::NodeProcessDeleteResult> NodeProcessDeleteOutcome;
			typedef std::future<NodeProcessDeleteOutcome> NodeProcessDeleteOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::NodeProcessDeleteRequest&, const NodeProcessDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeProcessDeleteAsyncHandler;
			typedef Outcome<Error, Model::NodeProcessesResult> NodeProcessesOutcome;
			typedef std::future<NodeProcessesOutcome> NodeProcessesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::NodeProcessesRequest&, const NodeProcessesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeProcessesAsyncHandler;
			typedef Outcome<Error, Model::NodeStatusResult> NodeStatusOutcome;
			typedef std::future<NodeStatusOutcome> NodeStatusOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::NodeStatusRequest&, const NodeStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeStatusAsyncHandler;
			typedef Outcome<Error, Model::NodeStatusListResult> NodeStatusListOutcome;
			typedef std::future<NodeStatusListOutcome> NodeStatusListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::NodeStatusListRequest&, const NodeStatusListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeStatusListAsyncHandler;
			typedef Outcome<Error, Model::NodeUninstallResult> NodeUninstallOutcome;
			typedef std::future<NodeUninstallOutcome> NodeUninstallOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::NodeUninstallRequest&, const NodeUninstallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeUninstallAsyncHandler;
			typedef Outcome<Error, Model::ProfileGetResult> ProfileGetOutcome;
			typedef std::future<ProfileGetOutcome> ProfileGetOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ProfileGetRequest&, const ProfileGetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProfileGetAsyncHandler;
			typedef Outcome<Error, Model::ProfileSetResult> ProfileSetOutcome;
			typedef std::future<ProfileSetOutcome> ProfileSetOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ProfileSetRequest&, const ProfileSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProfileSetAsyncHandler;
			typedef Outcome<Error, Model::PutCustomMetricResult> PutCustomMetricOutcome;
			typedef std::future<PutCustomMetricOutcome> PutCustomMetricOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutCustomMetricRequest&, const PutCustomMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutCustomMetricAsyncHandler;
			typedef Outcome<Error, Model::PutEventResult> PutEventOutcome;
			typedef std::future<PutEventOutcome> PutEventOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutEventRequest&, const PutEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutEventAsyncHandler;
			typedef Outcome<Error, Model::PutEventRuleResult> PutEventRuleOutcome;
			typedef std::future<PutEventRuleOutcome> PutEventRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutEventRuleRequest&, const PutEventRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutEventRuleAsyncHandler;
			typedef Outcome<Error, Model::PutEventTargetsResult> PutEventTargetsOutcome;
			typedef std::future<PutEventTargetsOutcome> PutEventTargetsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutEventTargetsRequest&, const PutEventTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutEventTargetsAsyncHandler;
			typedef Outcome<Error, Model::PutGroupDynamicRuleResult> PutGroupDynamicRuleOutcome;
			typedef std::future<PutGroupDynamicRuleOutcome> PutGroupDynamicRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutGroupDynamicRuleRequest&, const PutGroupDynamicRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutGroupDynamicRuleAsyncHandler;
			typedef Outcome<Error, Model::PutMetricAlarmResult> PutMetricAlarmOutcome;
			typedef std::future<PutMetricAlarmOutcome> PutMetricAlarmOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutMetricAlarmRequest&, const PutMetricAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutMetricAlarmAsyncHandler;
			typedef Outcome<Error, Model::PutMetricRuleTargetsResult> PutMetricRuleTargetsOutcome;
			typedef std::future<PutMetricRuleTargetsOutcome> PutMetricRuleTargetsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutMetricRuleTargetsRequest&, const PutMetricRuleTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutMetricRuleTargetsAsyncHandler;
			typedef Outcome<Error, Model::QueryCustomEventCountResult> QueryCustomEventCountOutcome;
			typedef std::future<QueryCustomEventCountOutcome> QueryCustomEventCountOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryCustomEventCountRequest&, const QueryCustomEventCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomEventCountAsyncHandler;
			typedef Outcome<Error, Model::QueryCustomEventDetailResult> QueryCustomEventDetailOutcome;
			typedef std::future<QueryCustomEventDetailOutcome> QueryCustomEventDetailOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryCustomEventDetailRequest&, const QueryCustomEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomEventDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryCustomEventHistogramResult> QueryCustomEventHistogramOutcome;
			typedef std::future<QueryCustomEventHistogramOutcome> QueryCustomEventHistogramOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryCustomEventHistogramRequest&, const QueryCustomEventHistogramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomEventHistogramAsyncHandler;
			typedef Outcome<Error, Model::QueryCustomMetricListResult> QueryCustomMetricListOutcome;
			typedef std::future<QueryCustomMetricListOutcome> QueryCustomMetricListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryCustomMetricListRequest&, const QueryCustomMetricListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomMetricListAsyncHandler;
			typedef Outcome<Error, Model::QueryErrorDistributionResult> QueryErrorDistributionOutcome;
			typedef std::future<QueryErrorDistributionOutcome> QueryErrorDistributionOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryErrorDistributionRequest&, const QueryErrorDistributionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryErrorDistributionAsyncHandler;
			typedef Outcome<Error, Model::QueryMetricDataResult> QueryMetricDataOutcome;
			typedef std::future<QueryMetricDataOutcome> QueryMetricDataOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryMetricDataRequest&, const QueryMetricDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMetricDataAsyncHandler;
			typedef Outcome<Error, Model::QueryMetricLastResult> QueryMetricLastOutcome;
			typedef std::future<QueryMetricLastOutcome> QueryMetricLastOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryMetricLastRequest&, const QueryMetricLastOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMetricLastAsyncHandler;
			typedef Outcome<Error, Model::QueryMetricListResult> QueryMetricListOutcome;
			typedef std::future<QueryMetricListOutcome> QueryMetricListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryMetricListRequest&, const QueryMetricListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMetricListAsyncHandler;
			typedef Outcome<Error, Model::QueryMetricMetaResult> QueryMetricMetaOutcome;
			typedef std::future<QueryMetricMetaOutcome> QueryMetricMetaOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryMetricMetaRequest&, const QueryMetricMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMetricMetaAsyncHandler;
			typedef Outcome<Error, Model::QueryMetricTopResult> QueryMetricTopOutcome;
			typedef std::future<QueryMetricTopOutcome> QueryMetricTopOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryMetricTopRequest&, const QueryMetricTopOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMetricTopAsyncHandler;
			typedef Outcome<Error, Model::QueryMonitorDataResult> QueryMonitorDataOutcome;
			typedef std::future<QueryMonitorDataOutcome> QueryMonitorDataOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryMonitorDataRequest&, const QueryMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::QueryProjectMetaResult> QueryProjectMetaOutcome;
			typedef std::future<QueryProjectMetaOutcome> QueryProjectMetaOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryProjectMetaRequest&, const QueryProjectMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryProjectMetaAsyncHandler;
			typedef Outcome<Error, Model::QueryStaticsAvailabilityResult> QueryStaticsAvailabilityOutcome;
			typedef std::future<QueryStaticsAvailabilityOutcome> QueryStaticsAvailabilityOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryStaticsAvailabilityRequest&, const QueryStaticsAvailabilityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryStaticsAvailabilityAsyncHandler;
			typedef Outcome<Error, Model::QueryStaticsErrorRateResult> QueryStaticsErrorRateOutcome;
			typedef std::future<QueryStaticsErrorRateOutcome> QueryStaticsErrorRateOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryStaticsErrorRateRequest&, const QueryStaticsErrorRateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryStaticsErrorRateAsyncHandler;
			typedef Outcome<Error, Model::QueryStaticsResponseTimeResult> QueryStaticsResponseTimeOutcome;
			typedef std::future<QueryStaticsResponseTimeOutcome> QueryStaticsResponseTimeOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryStaticsResponseTimeRequest&, const QueryStaticsResponseTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryStaticsResponseTimeAsyncHandler;
			typedef Outcome<Error, Model::QuerySystemEventCountResult> QuerySystemEventCountOutcome;
			typedef std::future<QuerySystemEventCountOutcome> QuerySystemEventCountOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QuerySystemEventCountRequest&, const QuerySystemEventCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySystemEventCountAsyncHandler;
			typedef Outcome<Error, Model::QuerySystemEventDemoResult> QuerySystemEventDemoOutcome;
			typedef std::future<QuerySystemEventDemoOutcome> QuerySystemEventDemoOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QuerySystemEventDemoRequest&, const QuerySystemEventDemoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySystemEventDemoAsyncHandler;
			typedef Outcome<Error, Model::QuerySystemEventDetailResult> QuerySystemEventDetailOutcome;
			typedef std::future<QuerySystemEventDetailOutcome> QuerySystemEventDetailOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QuerySystemEventDetailRequest&, const QuerySystemEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySystemEventDetailAsyncHandler;
			typedef Outcome<Error, Model::QuerySystemEventHistogramResult> QuerySystemEventHistogramOutcome;
			typedef std::future<QuerySystemEventHistogramOutcome> QuerySystemEventHistogramOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QuerySystemEventHistogramRequest&, const QuerySystemEventHistogramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySystemEventHistogramAsyncHandler;
			typedef Outcome<Error, Model::QueryTaskConfigResult> QueryTaskConfigOutcome;
			typedef std::future<QueryTaskConfigOutcome> QueryTaskConfigOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryTaskConfigRequest&, const QueryTaskConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTaskConfigAsyncHandler;
			typedef Outcome<Error, Model::QueryTaskMonitorDataResult> QueryTaskMonitorDataOutcome;
			typedef std::future<QueryTaskMonitorDataOutcome> QueryTaskMonitorDataOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::QueryTaskMonitorDataRequest&, const QueryTaskMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTaskMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::RemoveMetricRuleTargetsResult> RemoveMetricRuleTargetsOutcome;
			typedef std::future<RemoveMetricRuleTargetsOutcome> RemoveMetricRuleTargetsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::RemoveMetricRuleTargetsRequest&, const RemoveMetricRuleTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveMetricRuleTargetsAsyncHandler;
			typedef Outcome<Error, Model::SendDryRunSystemEventResult> SendDryRunSystemEventOutcome;
			typedef std::future<SendDryRunSystemEventOutcome> SendDryRunSystemEventOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::SendDryRunSystemEventRequest&, const SendDryRunSystemEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendDryRunSystemEventAsyncHandler;
			typedef Outcome<Error, Model::StartTasksResult> StartTasksOutcome;
			typedef std::future<StartTasksOutcome> StartTasksOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::StartTasksRequest&, const StartTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartTasksAsyncHandler;
			typedef Outcome<Error, Model::StopTasksResult> StopTasksOutcome;
			typedef std::future<StopTasksOutcome> StopTasksOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::StopTasksRequest&, const StopTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopTasksAsyncHandler;
			typedef Outcome<Error, Model::TaskConfigCreateResult> TaskConfigCreateOutcome;
			typedef std::future<TaskConfigCreateOutcome> TaskConfigCreateOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::TaskConfigCreateRequest&, const TaskConfigCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaskConfigCreateAsyncHandler;
			typedef Outcome<Error, Model::TaskConfigDeleteResult> TaskConfigDeleteOutcome;
			typedef std::future<TaskConfigDeleteOutcome> TaskConfigDeleteOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::TaskConfigDeleteRequest&, const TaskConfigDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaskConfigDeleteAsyncHandler;
			typedef Outcome<Error, Model::TaskConfigEnableResult> TaskConfigEnableOutcome;
			typedef std::future<TaskConfigEnableOutcome> TaskConfigEnableOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::TaskConfigEnableRequest&, const TaskConfigEnableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaskConfigEnableAsyncHandler;
			typedef Outcome<Error, Model::TaskConfigListResult> TaskConfigListOutcome;
			typedef std::future<TaskConfigListOutcome> TaskConfigListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::TaskConfigListRequest&, const TaskConfigListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaskConfigListAsyncHandler;
			typedef Outcome<Error, Model::TaskConfigModifyResult> TaskConfigModifyOutcome;
			typedef std::future<TaskConfigModifyOutcome> TaskConfigModifyOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::TaskConfigModifyRequest&, const TaskConfigModifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaskConfigModifyAsyncHandler;
			typedef Outcome<Error, Model::TaskConfigUnhealthyResult> TaskConfigUnhealthyOutcome;
			typedef std::future<TaskConfigUnhealthyOutcome> TaskConfigUnhealthyOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::TaskConfigUnhealthyRequest&, const TaskConfigUnhealthyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaskConfigUnhealthyAsyncHandler;
			typedef Outcome<Error, Model::UpdateAlarmResult> UpdateAlarmOutcome;
			typedef std::future<UpdateAlarmOutcome> UpdateAlarmOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::UpdateAlarmRequest&, const UpdateAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlarmAsyncHandler;
			typedef Outcome<Error, Model::UpdateMonitoringTemplateResult> UpdateMonitoringTemplateOutcome;
			typedef std::future<UpdateMonitoringTemplateOutcome> UpdateMonitoringTemplateOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::UpdateMonitoringTemplateRequest&, const UpdateMonitoringTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMonitoringTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateMyGroupAlertResult> UpdateMyGroupAlertOutcome;
			typedef std::future<UpdateMyGroupAlertOutcome> UpdateMyGroupAlertOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::UpdateMyGroupAlertRequest&, const UpdateMyGroupAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMyGroupAlertAsyncHandler;
			typedef Outcome<Error, Model::UpdateMyGroupInstancesResult> UpdateMyGroupInstancesOutcome;
			typedef std::future<UpdateMyGroupInstancesOutcome> UpdateMyGroupInstancesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::UpdateMyGroupInstancesRequest&, const UpdateMyGroupInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMyGroupInstancesAsyncHandler;
			typedef Outcome<Error, Model::UpdateMyGroupMembersResult> UpdateMyGroupMembersOutcome;
			typedef std::future<UpdateMyGroupMembersOutcome> UpdateMyGroupMembersOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::UpdateMyGroupMembersRequest&, const UpdateMyGroupMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMyGroupMembersAsyncHandler;
			typedef Outcome<Error, Model::UpdateMyGroupsResult> UpdateMyGroupsOutcome;
			typedef std::future<UpdateMyGroupsOutcome> UpdateMyGroupsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::UpdateMyGroupsRequest&, const UpdateMyGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMyGroupsAsyncHandler;

			CmsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CmsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CmsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CmsClient();
			AccessKeyGetOutcome accessKeyGet(const Model::AccessKeyGetRequest &request)const;
			void accessKeyGetAsync(const Model::AccessKeyGetRequest& request, const AccessKeyGetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AccessKeyGetOutcomeCallable accessKeyGetCallable(const Model::AccessKeyGetRequest& request) const;
			AddMyGroupInstancesOutcome addMyGroupInstances(const Model::AddMyGroupInstancesRequest &request)const;
			void addMyGroupInstancesAsync(const Model::AddMyGroupInstancesRequest& request, const AddMyGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMyGroupInstancesOutcomeCallable addMyGroupInstancesCallable(const Model::AddMyGroupInstancesRequest& request) const;
			ApplyMonitoringTemplateOutcome applyMonitoringTemplate(const Model::ApplyMonitoringTemplateRequest &request)const;
			void applyMonitoringTemplateAsync(const Model::ApplyMonitoringTemplateRequest& request, const ApplyMonitoringTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyMonitoringTemplateOutcomeCallable applyMonitoringTemplateCallable(const Model::ApplyMonitoringTemplateRequest& request) const;
			ApplyTemplateOutcome applyTemplate(const Model::ApplyTemplateRequest &request)const;
			void applyTemplateAsync(const Model::ApplyTemplateRequest& request, const ApplyTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyTemplateOutcomeCallable applyTemplateCallable(const Model::ApplyTemplateRequest& request) const;
			CreateAlarmOutcome createAlarm(const Model::CreateAlarmRequest &request)const;
			void createAlarmAsync(const Model::CreateAlarmRequest& request, const CreateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAlarmOutcomeCallable createAlarmCallable(const Model::CreateAlarmRequest& request) const;
			CreateMonitoringTemplateOutcome createMonitoringTemplate(const Model::CreateMonitoringTemplateRequest &request)const;
			void createMonitoringTemplateAsync(const Model::CreateMonitoringTemplateRequest& request, const CreateMonitoringTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMonitoringTemplateOutcomeCallable createMonitoringTemplateCallable(const Model::CreateMonitoringTemplateRequest& request) const;
			CreateMyGroupAlertBatchOutcome createMyGroupAlertBatch(const Model::CreateMyGroupAlertBatchRequest &request)const;
			void createMyGroupAlertBatchAsync(const Model::CreateMyGroupAlertBatchRequest& request, const CreateMyGroupAlertBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMyGroupAlertBatchOutcomeCallable createMyGroupAlertBatchCallable(const Model::CreateMyGroupAlertBatchRequest& request) const;
			CreateMyGroupsOutcome createMyGroups(const Model::CreateMyGroupsRequest &request)const;
			void createMyGroupsAsync(const Model::CreateMyGroupsRequest& request, const CreateMyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMyGroupsOutcomeCallable createMyGroupsCallable(const Model::CreateMyGroupsRequest& request) const;
			CreateNotifyPolicyOutcome createNotifyPolicy(const Model::CreateNotifyPolicyRequest &request)const;
			void createNotifyPolicyAsync(const Model::CreateNotifyPolicyRequest& request, const CreateNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNotifyPolicyOutcomeCallable createNotifyPolicyCallable(const Model::CreateNotifyPolicyRequest& request) const;
			CreateTaskOutcome createTask(const Model::CreateTaskRequest &request)const;
			void createTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTaskOutcomeCallable createTaskCallable(const Model::CreateTaskRequest& request) const;
			DeleteAlarmOutcome deleteAlarm(const Model::DeleteAlarmRequest &request)const;
			void deleteAlarmAsync(const Model::DeleteAlarmRequest& request, const DeleteAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAlarmOutcomeCallable deleteAlarmCallable(const Model::DeleteAlarmRequest& request) const;
			DeleteCustomMetricOutcome deleteCustomMetric(const Model::DeleteCustomMetricRequest &request)const;
			void deleteCustomMetricAsync(const Model::DeleteCustomMetricRequest& request, const DeleteCustomMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomMetricOutcomeCallable deleteCustomMetricCallable(const Model::DeleteCustomMetricRequest& request) const;
			DeleteEventRuleOutcome deleteEventRule(const Model::DeleteEventRuleRequest &request)const;
			void deleteEventRuleAsync(const Model::DeleteEventRuleRequest& request, const DeleteEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEventRuleOutcomeCallable deleteEventRuleCallable(const Model::DeleteEventRuleRequest& request) const;
			DeleteEventTargetsOutcome deleteEventTargets(const Model::DeleteEventTargetsRequest &request)const;
			void deleteEventTargetsAsync(const Model::DeleteEventTargetsRequest& request, const DeleteEventTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEventTargetsOutcomeCallable deleteEventTargetsCallable(const Model::DeleteEventTargetsRequest& request) const;
			DeleteGroupDynamicRuleOutcome deleteGroupDynamicRule(const Model::DeleteGroupDynamicRuleRequest &request)const;
			void deleteGroupDynamicRuleAsync(const Model::DeleteGroupDynamicRuleRequest& request, const DeleteGroupDynamicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupDynamicRuleOutcomeCallable deleteGroupDynamicRuleCallable(const Model::DeleteGroupDynamicRuleRequest& request) const;
			DeleteMonitoringTemplateOutcome deleteMonitoringTemplate(const Model::DeleteMonitoringTemplateRequest &request)const;
			void deleteMonitoringTemplateAsync(const Model::DeleteMonitoringTemplateRequest& request, const DeleteMonitoringTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMonitoringTemplateOutcomeCallable deleteMonitoringTemplateCallable(const Model::DeleteMonitoringTemplateRequest& request) const;
			DeleteMyGroupInstancesOutcome deleteMyGroupInstances(const Model::DeleteMyGroupInstancesRequest &request)const;
			void deleteMyGroupInstancesAsync(const Model::DeleteMyGroupInstancesRequest& request, const DeleteMyGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMyGroupInstancesOutcomeCallable deleteMyGroupInstancesCallable(const Model::DeleteMyGroupInstancesRequest& request) const;
			DeleteMyGroupsOutcome deleteMyGroups(const Model::DeleteMyGroupsRequest &request)const;
			void deleteMyGroupsAsync(const Model::DeleteMyGroupsRequest& request, const DeleteMyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMyGroupsOutcomeCallable deleteMyGroupsCallable(const Model::DeleteMyGroupsRequest& request) const;
			DeleteNotifyPolicyOutcome deleteNotifyPolicy(const Model::DeleteNotifyPolicyRequest &request)const;
			void deleteNotifyPolicyAsync(const Model::DeleteNotifyPolicyRequest& request, const DeleteNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNotifyPolicyOutcomeCallable deleteNotifyPolicyCallable(const Model::DeleteNotifyPolicyRequest& request) const;
			DeleteTasksOutcome deleteTasks(const Model::DeleteTasksRequest &request)const;
			void deleteTasksAsync(const Model::DeleteTasksRequest& request, const DeleteTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTasksOutcomeCallable deleteTasksCallable(const Model::DeleteTasksRequest& request) const;
			DescribeAlarmHistoryOutcome describeAlarmHistory(const Model::DescribeAlarmHistoryRequest &request)const;
			void describeAlarmHistoryAsync(const Model::DescribeAlarmHistoryRequest& request, const DescribeAlarmHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmHistoryOutcomeCallable describeAlarmHistoryCallable(const Model::DescribeAlarmHistoryRequest& request) const;
			DescribeAlarmsOutcome describeAlarms(const Model::DescribeAlarmsRequest &request)const;
			void describeAlarmsAsync(const Model::DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmsOutcomeCallable describeAlarmsCallable(const Model::DescribeAlarmsRequest& request) const;
			DescribeAlarmsForResourcesOutcome describeAlarmsForResources(const Model::DescribeAlarmsForResourcesRequest &request)const;
			void describeAlarmsForResourcesAsync(const Model::DescribeAlarmsForResourcesRequest& request, const DescribeAlarmsForResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmsForResourcesOutcomeCallable describeAlarmsForResourcesCallable(const Model::DescribeAlarmsForResourcesRequest& request) const;
			DescribeAlertHistoryListOutcome describeAlertHistoryList(const Model::DescribeAlertHistoryListRequest &request)const;
			void describeAlertHistoryListAsync(const Model::DescribeAlertHistoryListRequest& request, const DescribeAlertHistoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertHistoryListOutcomeCallable describeAlertHistoryListCallable(const Model::DescribeAlertHistoryListRequest& request) const;
			DescribeContactOutcome describeContact(const Model::DescribeContactRequest &request)const;
			void describeContactAsync(const Model::DescribeContactRequest& request, const DescribeContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContactOutcomeCallable describeContactCallable(const Model::DescribeContactRequest& request) const;
			DescribeEventRuleOutcome describeEventRule(const Model::DescribeEventRuleRequest &request)const;
			void describeEventRuleAsync(const Model::DescribeEventRuleRequest& request, const DescribeEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventRuleOutcomeCallable describeEventRuleCallable(const Model::DescribeEventRuleRequest& request) const;
			DescribeISPAreaCityOutcome describeISPAreaCity(const Model::DescribeISPAreaCityRequest &request)const;
			void describeISPAreaCityAsync(const Model::DescribeISPAreaCityRequest& request, const DescribeISPAreaCityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeISPAreaCityOutcomeCallable describeISPAreaCityCallable(const Model::DescribeISPAreaCityRequest& request) const;
			DescribeMetricRuleTargetsOutcome describeMetricRuleTargets(const Model::DescribeMetricRuleTargetsRequest &request)const;
			void describeMetricRuleTargetsAsync(const Model::DescribeMetricRuleTargetsRequest& request, const DescribeMetricRuleTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetricRuleTargetsOutcomeCallable describeMetricRuleTargetsCallable(const Model::DescribeMetricRuleTargetsRequest& request) const;
			DescribeSiteMonitorISPAreaCityOutcome describeSiteMonitorISPAreaCity(const Model::DescribeSiteMonitorISPAreaCityRequest &request)const;
			void describeSiteMonitorISPAreaCityAsync(const Model::DescribeSiteMonitorISPAreaCityRequest& request, const DescribeSiteMonitorISPAreaCityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSiteMonitorISPAreaCityOutcomeCallable describeSiteMonitorISPAreaCityCallable(const Model::DescribeSiteMonitorISPAreaCityRequest& request) const;
			DescribeSiteMonitorISPCityListOutcome describeSiteMonitorISPCityList(const Model::DescribeSiteMonitorISPCityListRequest &request)const;
			void describeSiteMonitorISPCityListAsync(const Model::DescribeSiteMonitorISPCityListRequest& request, const DescribeSiteMonitorISPCityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSiteMonitorISPCityListOutcomeCallable describeSiteMonitorISPCityListCallable(const Model::DescribeSiteMonitorISPCityListRequest& request) const;
			DescribeTaskDetailOutcome describeTaskDetail(const Model::DescribeTaskDetailRequest &request)const;
			void describeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTaskDetailOutcomeCallable describeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request) const;
			DescribeTasksOutcome describeTasks(const Model::DescribeTasksRequest &request)const;
			void describeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTasksOutcomeCallable describeTasksCallable(const Model::DescribeTasksRequest& request) const;
			DisableActiveAlertOutcome disableActiveAlert(const Model::DisableActiveAlertRequest &request)const;
			void disableActiveAlertAsync(const Model::DisableActiveAlertRequest& request, const DisableActiveAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableActiveAlertOutcomeCallable disableActiveAlertCallable(const Model::DisableActiveAlertRequest& request) const;
			DisableAlarmOutcome disableAlarm(const Model::DisableAlarmRequest &request)const;
			void disableAlarmAsync(const Model::DisableAlarmRequest& request, const DisableAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableAlarmOutcomeCallable disableAlarmCallable(const Model::DisableAlarmRequest& request) const;
			DisableEventRuleOutcome disableEventRule(const Model::DisableEventRuleRequest &request)const;
			void disableEventRuleAsync(const Model::DisableEventRuleRequest& request, const DisableEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableEventRuleOutcomeCallable disableEventRuleCallable(const Model::DisableEventRuleRequest& request) const;
			EnableActiveAlertOutcome enableActiveAlert(const Model::EnableActiveAlertRequest &request)const;
			void enableActiveAlertAsync(const Model::EnableActiveAlertRequest& request, const EnableActiveAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableActiveAlertOutcomeCallable enableActiveAlertCallable(const Model::EnableActiveAlertRequest& request) const;
			EnableAlarmOutcome enableAlarm(const Model::EnableAlarmRequest &request)const;
			void enableAlarmAsync(const Model::EnableAlarmRequest& request, const EnableAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableAlarmOutcomeCallable enableAlarmCallable(const Model::EnableAlarmRequest& request) const;
			EnableEventRuleOutcome enableEventRule(const Model::EnableEventRuleRequest &request)const;
			void enableEventRuleAsync(const Model::EnableEventRuleRequest& request, const EnableEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableEventRuleOutcomeCallable enableEventRuleCallable(const Model::EnableEventRuleRequest& request) const;
			GetContactsOutcome getContacts(const Model::GetContactsRequest &request)const;
			void getContactsAsync(const Model::GetContactsRequest& request, const GetContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetContactsOutcomeCallable getContactsCallable(const Model::GetContactsRequest& request) const;
			GetMonitoringTemplateOutcome getMonitoringTemplate(const Model::GetMonitoringTemplateRequest &request)const;
			void getMonitoringTemplateAsync(const Model::GetMonitoringTemplateRequest& request, const GetMonitoringTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMonitoringTemplateOutcomeCallable getMonitoringTemplateCallable(const Model::GetMonitoringTemplateRequest& request) const;
			GetMyGroupAlertOutcome getMyGroupAlert(const Model::GetMyGroupAlertRequest &request)const;
			void getMyGroupAlertAsync(const Model::GetMyGroupAlertRequest& request, const GetMyGroupAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMyGroupAlertOutcomeCallable getMyGroupAlertCallable(const Model::GetMyGroupAlertRequest& request) const;
			GetMyGroupsOutcome getMyGroups(const Model::GetMyGroupsRequest &request)const;
			void getMyGroupsAsync(const Model::GetMyGroupsRequest& request, const GetMyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMyGroupsOutcomeCallable getMyGroupsCallable(const Model::GetMyGroupsRequest& request) const;
			GetNotifyPolicyOutcome getNotifyPolicy(const Model::GetNotifyPolicyRequest &request)const;
			void getNotifyPolicyAsync(const Model::GetNotifyPolicyRequest& request, const GetNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNotifyPolicyOutcomeCallable getNotifyPolicyCallable(const Model::GetNotifyPolicyRequest& request) const;
			ListActiveAlertRuleOutcome listActiveAlertRule(const Model::ListActiveAlertRuleRequest &request)const;
			void listActiveAlertRuleAsync(const Model::ListActiveAlertRuleRequest& request, const ListActiveAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListActiveAlertRuleOutcomeCallable listActiveAlertRuleCallable(const Model::ListActiveAlertRuleRequest& request) const;
			ListAlarmOutcome listAlarm(const Model::ListAlarmRequest &request)const;
			void listAlarmAsync(const Model::ListAlarmRequest& request, const ListAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlarmOutcomeCallable listAlarmCallable(const Model::ListAlarmRequest& request) const;
			ListAlarmHistoryOutcome listAlarmHistory(const Model::ListAlarmHistoryRequest &request)const;
			void listAlarmHistoryAsync(const Model::ListAlarmHistoryRequest& request, const ListAlarmHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlarmHistoryOutcomeCallable listAlarmHistoryCallable(const Model::ListAlarmHistoryRequest& request) const;
			ListContactGroupOutcome listContactGroup(const Model::ListContactGroupRequest &request)const;
			void listContactGroupAsync(const Model::ListContactGroupRequest& request, const ListContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListContactGroupOutcomeCallable listContactGroupCallable(const Model::ListContactGroupRequest& request) const;
			ListEventRulesOutcome listEventRules(const Model::ListEventRulesRequest &request)const;
			void listEventRulesAsync(const Model::ListEventRulesRequest& request, const ListEventRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEventRulesOutcomeCallable listEventRulesCallable(const Model::ListEventRulesRequest& request) const;
			ListEventTargetsByRuleOutcome listEventTargetsByRule(const Model::ListEventTargetsByRuleRequest &request)const;
			void listEventTargetsByRuleAsync(const Model::ListEventTargetsByRuleRequest& request, const ListEventTargetsByRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEventTargetsByRuleOutcomeCallable listEventTargetsByRuleCallable(const Model::ListEventTargetsByRuleRequest& request) const;
			ListGroupDynamicRuleOutcome listGroupDynamicRule(const Model::ListGroupDynamicRuleRequest &request)const;
			void listGroupDynamicRuleAsync(const Model::ListGroupDynamicRuleRequest& request, const ListGroupDynamicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupDynamicRuleOutcomeCallable listGroupDynamicRuleCallable(const Model::ListGroupDynamicRuleRequest& request) const;
			ListMonitoringTemplatesOutcome listMonitoringTemplates(const Model::ListMonitoringTemplatesRequest &request)const;
			void listMonitoringTemplatesAsync(const Model::ListMonitoringTemplatesRequest& request, const ListMonitoringTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMonitoringTemplatesOutcomeCallable listMonitoringTemplatesCallable(const Model::ListMonitoringTemplatesRequest& request) const;
			ListMyGroupCategoriesOutcome listMyGroupCategories(const Model::ListMyGroupCategoriesRequest &request)const;
			void listMyGroupCategoriesAsync(const Model::ListMyGroupCategoriesRequest& request, const ListMyGroupCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMyGroupCategoriesOutcomeCallable listMyGroupCategoriesCallable(const Model::ListMyGroupCategoriesRequest& request) const;
			ListMyGroupInstancesOutcome listMyGroupInstances(const Model::ListMyGroupInstancesRequest &request)const;
			void listMyGroupInstancesAsync(const Model::ListMyGroupInstancesRequest& request, const ListMyGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMyGroupInstancesOutcomeCallable listMyGroupInstancesCallable(const Model::ListMyGroupInstancesRequest& request) const;
			ListMyGroupInstancesDetailsOutcome listMyGroupInstancesDetails(const Model::ListMyGroupInstancesDetailsRequest &request)const;
			void listMyGroupInstancesDetailsAsync(const Model::ListMyGroupInstancesDetailsRequest& request, const ListMyGroupInstancesDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMyGroupInstancesDetailsOutcomeCallable listMyGroupInstancesDetailsCallable(const Model::ListMyGroupInstancesDetailsRequest& request) const;
			ListMyGroupsOutcome listMyGroups(const Model::ListMyGroupsRequest &request)const;
			void listMyGroupsAsync(const Model::ListMyGroupsRequest& request, const ListMyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMyGroupsOutcomeCallable listMyGroupsCallable(const Model::ListMyGroupsRequest& request) const;
			ListNotifyPolicyOutcome listNotifyPolicy(const Model::ListNotifyPolicyRequest &request)const;
			void listNotifyPolicyAsync(const Model::ListNotifyPolicyRequest& request, const ListNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNotifyPolicyOutcomeCallable listNotifyPolicyCallable(const Model::ListNotifyPolicyRequest& request) const;
			ListProductOfActiveAlertOutcome listProductOfActiveAlert(const Model::ListProductOfActiveAlertRequest &request)const;
			void listProductOfActiveAlertAsync(const Model::ListProductOfActiveAlertRequest& request, const ListProductOfActiveAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProductOfActiveAlertOutcomeCallable listProductOfActiveAlertCallable(const Model::ListProductOfActiveAlertRequest& request) const;
			ModifyTaskOutcome modifyTask(const Model::ModifyTaskRequest &request)const;
			void modifyTaskAsync(const Model::ModifyTaskRequest& request, const ModifyTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTaskOutcomeCallable modifyTaskCallable(const Model::ModifyTaskRequest& request) const;
			NodeInstallOutcome nodeInstall(const Model::NodeInstallRequest &request)const;
			void nodeInstallAsync(const Model::NodeInstallRequest& request, const NodeInstallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NodeInstallOutcomeCallable nodeInstallCallable(const Model::NodeInstallRequest& request) const;
			NodeListOutcome nodeList(const Model::NodeListRequest &request)const;
			void nodeListAsync(const Model::NodeListRequest& request, const NodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NodeListOutcomeCallable nodeListCallable(const Model::NodeListRequest& request) const;
			NodeProcessCreateOutcome nodeProcessCreate(const Model::NodeProcessCreateRequest &request)const;
			void nodeProcessCreateAsync(const Model::NodeProcessCreateRequest& request, const NodeProcessCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NodeProcessCreateOutcomeCallable nodeProcessCreateCallable(const Model::NodeProcessCreateRequest& request) const;
			NodeProcessDeleteOutcome nodeProcessDelete(const Model::NodeProcessDeleteRequest &request)const;
			void nodeProcessDeleteAsync(const Model::NodeProcessDeleteRequest& request, const NodeProcessDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NodeProcessDeleteOutcomeCallable nodeProcessDeleteCallable(const Model::NodeProcessDeleteRequest& request) const;
			NodeProcessesOutcome nodeProcesses(const Model::NodeProcessesRequest &request)const;
			void nodeProcessesAsync(const Model::NodeProcessesRequest& request, const NodeProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NodeProcessesOutcomeCallable nodeProcessesCallable(const Model::NodeProcessesRequest& request) const;
			NodeStatusOutcome nodeStatus(const Model::NodeStatusRequest &request)const;
			void nodeStatusAsync(const Model::NodeStatusRequest& request, const NodeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NodeStatusOutcomeCallable nodeStatusCallable(const Model::NodeStatusRequest& request) const;
			NodeStatusListOutcome nodeStatusList(const Model::NodeStatusListRequest &request)const;
			void nodeStatusListAsync(const Model::NodeStatusListRequest& request, const NodeStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NodeStatusListOutcomeCallable nodeStatusListCallable(const Model::NodeStatusListRequest& request) const;
			NodeUninstallOutcome nodeUninstall(const Model::NodeUninstallRequest &request)const;
			void nodeUninstallAsync(const Model::NodeUninstallRequest& request, const NodeUninstallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NodeUninstallOutcomeCallable nodeUninstallCallable(const Model::NodeUninstallRequest& request) const;
			ProfileGetOutcome profileGet(const Model::ProfileGetRequest &request)const;
			void profileGetAsync(const Model::ProfileGetRequest& request, const ProfileGetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProfileGetOutcomeCallable profileGetCallable(const Model::ProfileGetRequest& request) const;
			ProfileSetOutcome profileSet(const Model::ProfileSetRequest &request)const;
			void profileSetAsync(const Model::ProfileSetRequest& request, const ProfileSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProfileSetOutcomeCallable profileSetCallable(const Model::ProfileSetRequest& request) const;
			PutCustomMetricOutcome putCustomMetric(const Model::PutCustomMetricRequest &request)const;
			void putCustomMetricAsync(const Model::PutCustomMetricRequest& request, const PutCustomMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutCustomMetricOutcomeCallable putCustomMetricCallable(const Model::PutCustomMetricRequest& request) const;
			PutEventOutcome putEvent(const Model::PutEventRequest &request)const;
			void putEventAsync(const Model::PutEventRequest& request, const PutEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutEventOutcomeCallable putEventCallable(const Model::PutEventRequest& request) const;
			PutEventRuleOutcome putEventRule(const Model::PutEventRuleRequest &request)const;
			void putEventRuleAsync(const Model::PutEventRuleRequest& request, const PutEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutEventRuleOutcomeCallable putEventRuleCallable(const Model::PutEventRuleRequest& request) const;
			PutEventTargetsOutcome putEventTargets(const Model::PutEventTargetsRequest &request)const;
			void putEventTargetsAsync(const Model::PutEventTargetsRequest& request, const PutEventTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutEventTargetsOutcomeCallable putEventTargetsCallable(const Model::PutEventTargetsRequest& request) const;
			PutGroupDynamicRuleOutcome putGroupDynamicRule(const Model::PutGroupDynamicRuleRequest &request)const;
			void putGroupDynamicRuleAsync(const Model::PutGroupDynamicRuleRequest& request, const PutGroupDynamicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutGroupDynamicRuleOutcomeCallable putGroupDynamicRuleCallable(const Model::PutGroupDynamicRuleRequest& request) const;
			PutMetricAlarmOutcome putMetricAlarm(const Model::PutMetricAlarmRequest &request)const;
			void putMetricAlarmAsync(const Model::PutMetricAlarmRequest& request, const PutMetricAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutMetricAlarmOutcomeCallable putMetricAlarmCallable(const Model::PutMetricAlarmRequest& request) const;
			PutMetricRuleTargetsOutcome putMetricRuleTargets(const Model::PutMetricRuleTargetsRequest &request)const;
			void putMetricRuleTargetsAsync(const Model::PutMetricRuleTargetsRequest& request, const PutMetricRuleTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutMetricRuleTargetsOutcomeCallable putMetricRuleTargetsCallable(const Model::PutMetricRuleTargetsRequest& request) const;
			QueryCustomEventCountOutcome queryCustomEventCount(const Model::QueryCustomEventCountRequest &request)const;
			void queryCustomEventCountAsync(const Model::QueryCustomEventCountRequest& request, const QueryCustomEventCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCustomEventCountOutcomeCallable queryCustomEventCountCallable(const Model::QueryCustomEventCountRequest& request) const;
			QueryCustomEventDetailOutcome queryCustomEventDetail(const Model::QueryCustomEventDetailRequest &request)const;
			void queryCustomEventDetailAsync(const Model::QueryCustomEventDetailRequest& request, const QueryCustomEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCustomEventDetailOutcomeCallable queryCustomEventDetailCallable(const Model::QueryCustomEventDetailRequest& request) const;
			QueryCustomEventHistogramOutcome queryCustomEventHistogram(const Model::QueryCustomEventHistogramRequest &request)const;
			void queryCustomEventHistogramAsync(const Model::QueryCustomEventHistogramRequest& request, const QueryCustomEventHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCustomEventHistogramOutcomeCallable queryCustomEventHistogramCallable(const Model::QueryCustomEventHistogramRequest& request) const;
			QueryCustomMetricListOutcome queryCustomMetricList(const Model::QueryCustomMetricListRequest &request)const;
			void queryCustomMetricListAsync(const Model::QueryCustomMetricListRequest& request, const QueryCustomMetricListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCustomMetricListOutcomeCallable queryCustomMetricListCallable(const Model::QueryCustomMetricListRequest& request) const;
			QueryErrorDistributionOutcome queryErrorDistribution(const Model::QueryErrorDistributionRequest &request)const;
			void queryErrorDistributionAsync(const Model::QueryErrorDistributionRequest& request, const QueryErrorDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryErrorDistributionOutcomeCallable queryErrorDistributionCallable(const Model::QueryErrorDistributionRequest& request) const;
			QueryMetricDataOutcome queryMetricData(const Model::QueryMetricDataRequest &request)const;
			void queryMetricDataAsync(const Model::QueryMetricDataRequest& request, const QueryMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMetricDataOutcomeCallable queryMetricDataCallable(const Model::QueryMetricDataRequest& request) const;
			QueryMetricLastOutcome queryMetricLast(const Model::QueryMetricLastRequest &request)const;
			void queryMetricLastAsync(const Model::QueryMetricLastRequest& request, const QueryMetricLastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMetricLastOutcomeCallable queryMetricLastCallable(const Model::QueryMetricLastRequest& request) const;
			QueryMetricListOutcome queryMetricList(const Model::QueryMetricListRequest &request)const;
			void queryMetricListAsync(const Model::QueryMetricListRequest& request, const QueryMetricListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMetricListOutcomeCallable queryMetricListCallable(const Model::QueryMetricListRequest& request) const;
			QueryMetricMetaOutcome queryMetricMeta(const Model::QueryMetricMetaRequest &request)const;
			void queryMetricMetaAsync(const Model::QueryMetricMetaRequest& request, const QueryMetricMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMetricMetaOutcomeCallable queryMetricMetaCallable(const Model::QueryMetricMetaRequest& request) const;
			QueryMetricTopOutcome queryMetricTop(const Model::QueryMetricTopRequest &request)const;
			void queryMetricTopAsync(const Model::QueryMetricTopRequest& request, const QueryMetricTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMetricTopOutcomeCallable queryMetricTopCallable(const Model::QueryMetricTopRequest& request) const;
			QueryMonitorDataOutcome queryMonitorData(const Model::QueryMonitorDataRequest &request)const;
			void queryMonitorDataAsync(const Model::QueryMonitorDataRequest& request, const QueryMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMonitorDataOutcomeCallable queryMonitorDataCallable(const Model::QueryMonitorDataRequest& request) const;
			QueryProjectMetaOutcome queryProjectMeta(const Model::QueryProjectMetaRequest &request)const;
			void queryProjectMetaAsync(const Model::QueryProjectMetaRequest& request, const QueryProjectMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryProjectMetaOutcomeCallable queryProjectMetaCallable(const Model::QueryProjectMetaRequest& request) const;
			QueryStaticsAvailabilityOutcome queryStaticsAvailability(const Model::QueryStaticsAvailabilityRequest &request)const;
			void queryStaticsAvailabilityAsync(const Model::QueryStaticsAvailabilityRequest& request, const QueryStaticsAvailabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryStaticsAvailabilityOutcomeCallable queryStaticsAvailabilityCallable(const Model::QueryStaticsAvailabilityRequest& request) const;
			QueryStaticsErrorRateOutcome queryStaticsErrorRate(const Model::QueryStaticsErrorRateRequest &request)const;
			void queryStaticsErrorRateAsync(const Model::QueryStaticsErrorRateRequest& request, const QueryStaticsErrorRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryStaticsErrorRateOutcomeCallable queryStaticsErrorRateCallable(const Model::QueryStaticsErrorRateRequest& request) const;
			QueryStaticsResponseTimeOutcome queryStaticsResponseTime(const Model::QueryStaticsResponseTimeRequest &request)const;
			void queryStaticsResponseTimeAsync(const Model::QueryStaticsResponseTimeRequest& request, const QueryStaticsResponseTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryStaticsResponseTimeOutcomeCallable queryStaticsResponseTimeCallable(const Model::QueryStaticsResponseTimeRequest& request) const;
			QuerySystemEventCountOutcome querySystemEventCount(const Model::QuerySystemEventCountRequest &request)const;
			void querySystemEventCountAsync(const Model::QuerySystemEventCountRequest& request, const QuerySystemEventCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySystemEventCountOutcomeCallable querySystemEventCountCallable(const Model::QuerySystemEventCountRequest& request) const;
			QuerySystemEventDemoOutcome querySystemEventDemo(const Model::QuerySystemEventDemoRequest &request)const;
			void querySystemEventDemoAsync(const Model::QuerySystemEventDemoRequest& request, const QuerySystemEventDemoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySystemEventDemoOutcomeCallable querySystemEventDemoCallable(const Model::QuerySystemEventDemoRequest& request) const;
			QuerySystemEventDetailOutcome querySystemEventDetail(const Model::QuerySystemEventDetailRequest &request)const;
			void querySystemEventDetailAsync(const Model::QuerySystemEventDetailRequest& request, const QuerySystemEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySystemEventDetailOutcomeCallable querySystemEventDetailCallable(const Model::QuerySystemEventDetailRequest& request) const;
			QuerySystemEventHistogramOutcome querySystemEventHistogram(const Model::QuerySystemEventHistogramRequest &request)const;
			void querySystemEventHistogramAsync(const Model::QuerySystemEventHistogramRequest& request, const QuerySystemEventHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySystemEventHistogramOutcomeCallable querySystemEventHistogramCallable(const Model::QuerySystemEventHistogramRequest& request) const;
			QueryTaskConfigOutcome queryTaskConfig(const Model::QueryTaskConfigRequest &request)const;
			void queryTaskConfigAsync(const Model::QueryTaskConfigRequest& request, const QueryTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTaskConfigOutcomeCallable queryTaskConfigCallable(const Model::QueryTaskConfigRequest& request) const;
			QueryTaskMonitorDataOutcome queryTaskMonitorData(const Model::QueryTaskMonitorDataRequest &request)const;
			void queryTaskMonitorDataAsync(const Model::QueryTaskMonitorDataRequest& request, const QueryTaskMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTaskMonitorDataOutcomeCallable queryTaskMonitorDataCallable(const Model::QueryTaskMonitorDataRequest& request) const;
			RemoveMetricRuleTargetsOutcome removeMetricRuleTargets(const Model::RemoveMetricRuleTargetsRequest &request)const;
			void removeMetricRuleTargetsAsync(const Model::RemoveMetricRuleTargetsRequest& request, const RemoveMetricRuleTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveMetricRuleTargetsOutcomeCallable removeMetricRuleTargetsCallable(const Model::RemoveMetricRuleTargetsRequest& request) const;
			SendDryRunSystemEventOutcome sendDryRunSystemEvent(const Model::SendDryRunSystemEventRequest &request)const;
			void sendDryRunSystemEventAsync(const Model::SendDryRunSystemEventRequest& request, const SendDryRunSystemEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendDryRunSystemEventOutcomeCallable sendDryRunSystemEventCallable(const Model::SendDryRunSystemEventRequest& request) const;
			StartTasksOutcome startTasks(const Model::StartTasksRequest &request)const;
			void startTasksAsync(const Model::StartTasksRequest& request, const StartTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartTasksOutcomeCallable startTasksCallable(const Model::StartTasksRequest& request) const;
			StopTasksOutcome stopTasks(const Model::StopTasksRequest &request)const;
			void stopTasksAsync(const Model::StopTasksRequest& request, const StopTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopTasksOutcomeCallable stopTasksCallable(const Model::StopTasksRequest& request) const;
			TaskConfigCreateOutcome taskConfigCreate(const Model::TaskConfigCreateRequest &request)const;
			void taskConfigCreateAsync(const Model::TaskConfigCreateRequest& request, const TaskConfigCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaskConfigCreateOutcomeCallable taskConfigCreateCallable(const Model::TaskConfigCreateRequest& request) const;
			TaskConfigDeleteOutcome taskConfigDelete(const Model::TaskConfigDeleteRequest &request)const;
			void taskConfigDeleteAsync(const Model::TaskConfigDeleteRequest& request, const TaskConfigDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaskConfigDeleteOutcomeCallable taskConfigDeleteCallable(const Model::TaskConfigDeleteRequest& request) const;
			TaskConfigEnableOutcome taskConfigEnable(const Model::TaskConfigEnableRequest &request)const;
			void taskConfigEnableAsync(const Model::TaskConfigEnableRequest& request, const TaskConfigEnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaskConfigEnableOutcomeCallable taskConfigEnableCallable(const Model::TaskConfigEnableRequest& request) const;
			TaskConfigListOutcome taskConfigList(const Model::TaskConfigListRequest &request)const;
			void taskConfigListAsync(const Model::TaskConfigListRequest& request, const TaskConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaskConfigListOutcomeCallable taskConfigListCallable(const Model::TaskConfigListRequest& request) const;
			TaskConfigModifyOutcome taskConfigModify(const Model::TaskConfigModifyRequest &request)const;
			void taskConfigModifyAsync(const Model::TaskConfigModifyRequest& request, const TaskConfigModifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaskConfigModifyOutcomeCallable taskConfigModifyCallable(const Model::TaskConfigModifyRequest& request) const;
			TaskConfigUnhealthyOutcome taskConfigUnhealthy(const Model::TaskConfigUnhealthyRequest &request)const;
			void taskConfigUnhealthyAsync(const Model::TaskConfigUnhealthyRequest& request, const TaskConfigUnhealthyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaskConfigUnhealthyOutcomeCallable taskConfigUnhealthyCallable(const Model::TaskConfigUnhealthyRequest& request) const;
			UpdateAlarmOutcome updateAlarm(const Model::UpdateAlarmRequest &request)const;
			void updateAlarmAsync(const Model::UpdateAlarmRequest& request, const UpdateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAlarmOutcomeCallable updateAlarmCallable(const Model::UpdateAlarmRequest& request) const;
			UpdateMonitoringTemplateOutcome updateMonitoringTemplate(const Model::UpdateMonitoringTemplateRequest &request)const;
			void updateMonitoringTemplateAsync(const Model::UpdateMonitoringTemplateRequest& request, const UpdateMonitoringTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMonitoringTemplateOutcomeCallable updateMonitoringTemplateCallable(const Model::UpdateMonitoringTemplateRequest& request) const;
			UpdateMyGroupAlertOutcome updateMyGroupAlert(const Model::UpdateMyGroupAlertRequest &request)const;
			void updateMyGroupAlertAsync(const Model::UpdateMyGroupAlertRequest& request, const UpdateMyGroupAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMyGroupAlertOutcomeCallable updateMyGroupAlertCallable(const Model::UpdateMyGroupAlertRequest& request) const;
			UpdateMyGroupInstancesOutcome updateMyGroupInstances(const Model::UpdateMyGroupInstancesRequest &request)const;
			void updateMyGroupInstancesAsync(const Model::UpdateMyGroupInstancesRequest& request, const UpdateMyGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMyGroupInstancesOutcomeCallable updateMyGroupInstancesCallable(const Model::UpdateMyGroupInstancesRequest& request) const;
			UpdateMyGroupMembersOutcome updateMyGroupMembers(const Model::UpdateMyGroupMembersRequest &request)const;
			void updateMyGroupMembersAsync(const Model::UpdateMyGroupMembersRequest& request, const UpdateMyGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMyGroupMembersOutcomeCallable updateMyGroupMembersCallable(const Model::UpdateMyGroupMembersRequest& request) const;
			UpdateMyGroupsOutcome updateMyGroups(const Model::UpdateMyGroupsRequest &request)const;
			void updateMyGroupsAsync(const Model::UpdateMyGroupsRequest& request, const UpdateMyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMyGroupsOutcomeCallable updateMyGroupsCallable(const Model::UpdateMyGroupsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CMS_CMSCLIENT_H_
