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
#include "model/AddTagsRequest.h"
#include "model/AddTagsResult.h"
#include "model/ApplyMetricRuleTemplateRequest.h"
#include "model/ApplyMetricRuleTemplateResult.h"
#include "model/CreateCmsCallNumOrderRequest.h"
#include "model/CreateCmsCallNumOrderResult.h"
#include "model/CreateCmsOrderRequest.h"
#include "model/CreateCmsOrderResult.h"
#include "model/CreateCmsSmspackageOrderRequest.h"
#include "model/CreateCmsSmspackageOrderResult.h"
#include "model/CreateDynamicTagGroupRequest.h"
#include "model/CreateDynamicTagGroupResult.h"
#include "model/CreateGroupMetricRulesRequest.h"
#include "model/CreateGroupMetricRulesResult.h"
#include "model/CreateGroupMonitoringAgentProcessRequest.h"
#include "model/CreateGroupMonitoringAgentProcessResult.h"
#include "model/CreateHostAvailabilityRequest.h"
#include "model/CreateHostAvailabilityResult.h"
#include "model/CreateInstantSiteMonitorRequest.h"
#include "model/CreateInstantSiteMonitorResult.h"
#include "model/CreateMetricRuleResourcesRequest.h"
#include "model/CreateMetricRuleResourcesResult.h"
#include "model/CreateMetricRuleTemplateRequest.h"
#include "model/CreateMetricRuleTemplateResult.h"
#include "model/CreateMonitorAgentProcessRequest.h"
#include "model/CreateMonitorAgentProcessResult.h"
#include "model/CreateMonitorGroupRequest.h"
#include "model/CreateMonitorGroupResult.h"
#include "model/CreateMonitorGroupByResourceGroupIdRequest.h"
#include "model/CreateMonitorGroupByResourceGroupIdResult.h"
#include "model/CreateMonitorGroupInstancesRequest.h"
#include "model/CreateMonitorGroupInstancesResult.h"
#include "model/CreateMonitorGroupNotifyPolicyRequest.h"
#include "model/CreateMonitorGroupNotifyPolicyResult.h"
#include "model/CreateMonitoringAgentProcessRequest.h"
#include "model/CreateMonitoringAgentProcessResult.h"
#include "model/CreateSiteMonitorRequest.h"
#include "model/CreateSiteMonitorResult.h"
#include "model/DeleteContactRequest.h"
#include "model/DeleteContactResult.h"
#include "model/DeleteContactGroupRequest.h"
#include "model/DeleteContactGroupResult.h"
#include "model/DeleteCustomMetricRequest.h"
#include "model/DeleteCustomMetricResult.h"
#include "model/DeleteDynamicTagGroupRequest.h"
#include "model/DeleteDynamicTagGroupResult.h"
#include "model/DeleteEventRuleTargetsRequest.h"
#include "model/DeleteEventRuleTargetsResult.h"
#include "model/DeleteEventRulesRequest.h"
#include "model/DeleteEventRulesResult.h"
#include "model/DeleteExporterOutputRequest.h"
#include "model/DeleteExporterOutputResult.h"
#include "model/DeleteExporterRuleRequest.h"
#include "model/DeleteExporterRuleResult.h"
#include "model/DeleteGroupMonitoringAgentProcessRequest.h"
#include "model/DeleteGroupMonitoringAgentProcessResult.h"
#include "model/DeleteHostAvailabilityRequest.h"
#include "model/DeleteHostAvailabilityResult.h"
#include "model/DeleteLogMonitorRequest.h"
#include "model/DeleteLogMonitorResult.h"
#include "model/DeleteMetricRuleResourcesRequest.h"
#include "model/DeleteMetricRuleResourcesResult.h"
#include "model/DeleteMetricRuleTargetsRequest.h"
#include "model/DeleteMetricRuleTargetsResult.h"
#include "model/DeleteMetricRuleTemplateRequest.h"
#include "model/DeleteMetricRuleTemplateResult.h"
#include "model/DeleteMetricRulesRequest.h"
#include "model/DeleteMetricRulesResult.h"
#include "model/DeleteMonitorGroupRequest.h"
#include "model/DeleteMonitorGroupResult.h"
#include "model/DeleteMonitorGroupDynamicRuleRequest.h"
#include "model/DeleteMonitorGroupDynamicRuleResult.h"
#include "model/DeleteMonitorGroupInstancesRequest.h"
#include "model/DeleteMonitorGroupInstancesResult.h"
#include "model/DeleteMonitorGroupNotifyPolicyRequest.h"
#include "model/DeleteMonitorGroupNotifyPolicyResult.h"
#include "model/DeleteMonitoringAgentProcessRequest.h"
#include "model/DeleteMonitoringAgentProcessResult.h"
#include "model/DeleteSiteMonitorsRequest.h"
#include "model/DeleteSiteMonitorsResult.h"
#include "model/DescribeActiveMetricRuleListRequest.h"
#include "model/DescribeActiveMetricRuleListResult.h"
#include "model/DescribeAlertHistoryListRequest.h"
#include "model/DescribeAlertHistoryListResult.h"
#include "model/DescribeAlertLogCountRequest.h"
#include "model/DescribeAlertLogCountResult.h"
#include "model/DescribeAlertLogHistogramRequest.h"
#include "model/DescribeAlertLogHistogramResult.h"
#include "model/DescribeAlertLogListRequest.h"
#include "model/DescribeAlertLogListResult.h"
#include "model/DescribeAlertingMetricRuleResourcesRequest.h"
#include "model/DescribeAlertingMetricRuleResourcesResult.h"
#include "model/DescribeContactGroupListRequest.h"
#include "model/DescribeContactGroupListResult.h"
#include "model/DescribeContactListRequest.h"
#include "model/DescribeContactListResult.h"
#include "model/DescribeContactListByContactGroupRequest.h"
#include "model/DescribeContactListByContactGroupResult.h"
#include "model/DescribeCustomEventAttributeRequest.h"
#include "model/DescribeCustomEventAttributeResult.h"
#include "model/DescribeCustomEventCountRequest.h"
#include "model/DescribeCustomEventCountResult.h"
#include "model/DescribeCustomEventHistogramRequest.h"
#include "model/DescribeCustomEventHistogramResult.h"
#include "model/DescribeCustomMetricListRequest.h"
#include "model/DescribeCustomMetricListResult.h"
#include "model/DescribeDynamicTagRuleListRequest.h"
#include "model/DescribeDynamicTagRuleListResult.h"
#include "model/DescribeEventRuleAttributeRequest.h"
#include "model/DescribeEventRuleAttributeResult.h"
#include "model/DescribeEventRuleListRequest.h"
#include "model/DescribeEventRuleListResult.h"
#include "model/DescribeEventRuleTargetListRequest.h"
#include "model/DescribeEventRuleTargetListResult.h"
#include "model/DescribeExporterOutputListRequest.h"
#include "model/DescribeExporterOutputListResult.h"
#include "model/DescribeExporterRuleListRequest.h"
#include "model/DescribeExporterRuleListResult.h"
#include "model/DescribeGroupMonitoringAgentProcessRequest.h"
#include "model/DescribeGroupMonitoringAgentProcessResult.h"
#include "model/DescribeHostAvailabilityListRequest.h"
#include "model/DescribeHostAvailabilityListResult.h"
#include "model/DescribeLogMonitorAttributeRequest.h"
#include "model/DescribeLogMonitorAttributeResult.h"
#include "model/DescribeLogMonitorListRequest.h"
#include "model/DescribeLogMonitorListResult.h"
#include "model/DescribeMetricDataRequest.h"
#include "model/DescribeMetricDataResult.h"
#include "model/DescribeMetricLastRequest.h"
#include "model/DescribeMetricLastResult.h"
#include "model/DescribeMetricListRequest.h"
#include "model/DescribeMetricListResult.h"
#include "model/DescribeMetricMetaListRequest.h"
#include "model/DescribeMetricMetaListResult.h"
#include "model/DescribeMetricRuleCountRequest.h"
#include "model/DescribeMetricRuleCountResult.h"
#include "model/DescribeMetricRuleListRequest.h"
#include "model/DescribeMetricRuleListResult.h"
#include "model/DescribeMetricRuleTargetsRequest.h"
#include "model/DescribeMetricRuleTargetsResult.h"
#include "model/DescribeMetricRuleTemplateAttributeRequest.h"
#include "model/DescribeMetricRuleTemplateAttributeResult.h"
#include "model/DescribeMetricRuleTemplateListRequest.h"
#include "model/DescribeMetricRuleTemplateListResult.h"
#include "model/DescribeMetricTopRequest.h"
#include "model/DescribeMetricTopResult.h"
#include "model/DescribeMonitorGroupCategoriesRequest.h"
#include "model/DescribeMonitorGroupCategoriesResult.h"
#include "model/DescribeMonitorGroupDynamicRulesRequest.h"
#include "model/DescribeMonitorGroupDynamicRulesResult.h"
#include "model/DescribeMonitorGroupInstanceAttributeRequest.h"
#include "model/DescribeMonitorGroupInstanceAttributeResult.h"
#include "model/DescribeMonitorGroupInstancesRequest.h"
#include "model/DescribeMonitorGroupInstancesResult.h"
#include "model/DescribeMonitorGroupNotifyPolicyListRequest.h"
#include "model/DescribeMonitorGroupNotifyPolicyListResult.h"
#include "model/DescribeMonitorGroupsRequest.h"
#include "model/DescribeMonitorGroupsResult.h"
#include "model/DescribeMonitorResourceQuotaAttributeRequest.h"
#include "model/DescribeMonitorResourceQuotaAttributeResult.h"
#include "model/DescribeMonitoringAgentAccessKeyRequest.h"
#include "model/DescribeMonitoringAgentAccessKeyResult.h"
#include "model/DescribeMonitoringAgentConfigRequest.h"
#include "model/DescribeMonitoringAgentConfigResult.h"
#include "model/DescribeMonitoringAgentHostsRequest.h"
#include "model/DescribeMonitoringAgentHostsResult.h"
#include "model/DescribeMonitoringAgentProcessesRequest.h"
#include "model/DescribeMonitoringAgentProcessesResult.h"
#include "model/DescribeMonitoringAgentStatusesRequest.h"
#include "model/DescribeMonitoringAgentStatusesResult.h"
#include "model/DescribeMonitoringConfigRequest.h"
#include "model/DescribeMonitoringConfigResult.h"
#include "model/DescribeProductResourceTagKeyListRequest.h"
#include "model/DescribeProductResourceTagKeyListResult.h"
#include "model/DescribeProductsOfActiveMetricRuleRequest.h"
#include "model/DescribeProductsOfActiveMetricRuleResult.h"
#include "model/DescribeProjectMetaRequest.h"
#include "model/DescribeProjectMetaResult.h"
#include "model/DescribeSiteMonitorAttributeRequest.h"
#include "model/DescribeSiteMonitorAttributeResult.h"
#include "model/DescribeSiteMonitorDataRequest.h"
#include "model/DescribeSiteMonitorDataResult.h"
#include "model/DescribeSiteMonitorISPCityListRequest.h"
#include "model/DescribeSiteMonitorISPCityListResult.h"
#include "model/DescribeSiteMonitorListRequest.h"
#include "model/DescribeSiteMonitorListResult.h"
#include "model/DescribeSiteMonitorLogRequest.h"
#include "model/DescribeSiteMonitorLogResult.h"
#include "model/DescribeSiteMonitorQuotaRequest.h"
#include "model/DescribeSiteMonitorQuotaResult.h"
#include "model/DescribeSiteMonitorStatisticsRequest.h"
#include "model/DescribeSiteMonitorStatisticsResult.h"
#include "model/DescribeSystemEventAttributeRequest.h"
#include "model/DescribeSystemEventAttributeResult.h"
#include "model/DescribeSystemEventCountRequest.h"
#include "model/DescribeSystemEventCountResult.h"
#include "model/DescribeSystemEventHistogramRequest.h"
#include "model/DescribeSystemEventHistogramResult.h"
#include "model/DescribeSystemEventMetaListRequest.h"
#include "model/DescribeSystemEventMetaListResult.h"
#include "model/DescribeTagKeyListRequest.h"
#include "model/DescribeTagKeyListResult.h"
#include "model/DescribeTagValueListRequest.h"
#include "model/DescribeTagValueListResult.h"
#include "model/DescribeUnhealthyHostAvailabilityRequest.h"
#include "model/DescribeUnhealthyHostAvailabilityResult.h"
#include "model/DisableActiveMetricRuleRequest.h"
#include "model/DisableActiveMetricRuleResult.h"
#include "model/DisableEventRulesRequest.h"
#include "model/DisableEventRulesResult.h"
#include "model/DisableHostAvailabilityRequest.h"
#include "model/DisableHostAvailabilityResult.h"
#include "model/DisableMetricRulesRequest.h"
#include "model/DisableMetricRulesResult.h"
#include "model/DisableSiteMonitorsRequest.h"
#include "model/DisableSiteMonitorsResult.h"
#include "model/EnableActiveMetricRuleRequest.h"
#include "model/EnableActiveMetricRuleResult.h"
#include "model/EnableEventRulesRequest.h"
#include "model/EnableEventRulesResult.h"
#include "model/EnableHostAvailabilityRequest.h"
#include "model/EnableHostAvailabilityResult.h"
#include "model/EnableMetricRulesRequest.h"
#include "model/EnableMetricRulesResult.h"
#include "model/EnableSiteMonitorsRequest.h"
#include "model/EnableSiteMonitorsResult.h"
#include "model/InstallMonitoringAgentRequest.h"
#include "model/InstallMonitoringAgentResult.h"
#include "model/ModifyGroupMonitoringAgentProcessRequest.h"
#include "model/ModifyGroupMonitoringAgentProcessResult.h"
#include "model/ModifyHostAvailabilityRequest.h"
#include "model/ModifyHostAvailabilityResult.h"
#include "model/ModifyHostInfoRequest.h"
#include "model/ModifyHostInfoResult.h"
#include "model/ModifyMetricRuleTemplateRequest.h"
#include "model/ModifyMetricRuleTemplateResult.h"
#include "model/ModifyMonitorGroupRequest.h"
#include "model/ModifyMonitorGroupResult.h"
#include "model/ModifyMonitorGroupInstancesRequest.h"
#include "model/ModifyMonitorGroupInstancesResult.h"
#include "model/ModifySiteMonitorRequest.h"
#include "model/ModifySiteMonitorResult.h"
#include "model/OpenCmsServiceRequest.h"
#include "model/OpenCmsServiceResult.h"
#include "model/PutContactRequest.h"
#include "model/PutContactResult.h"
#include "model/PutContactGroupRequest.h"
#include "model/PutContactGroupResult.h"
#include "model/PutCustomEventRequest.h"
#include "model/PutCustomEventResult.h"
#include "model/PutCustomEventRuleRequest.h"
#include "model/PutCustomEventRuleResult.h"
#include "model/PutCustomMetricRequest.h"
#include "model/PutCustomMetricResult.h"
#include "model/PutCustomMetricRuleRequest.h"
#include "model/PutCustomMetricRuleResult.h"
#include "model/PutEventRuleRequest.h"
#include "model/PutEventRuleResult.h"
#include "model/PutEventRuleTargetsRequest.h"
#include "model/PutEventRuleTargetsResult.h"
#include "model/PutExporterOutputRequest.h"
#include "model/PutExporterOutputResult.h"
#include "model/PutExporterRuleRequest.h"
#include "model/PutExporterRuleResult.h"
#include "model/PutGroupMetricRuleRequest.h"
#include "model/PutGroupMetricRuleResult.h"
#include "model/PutHybridMonitorMetricDataRequest.h"
#include "model/PutHybridMonitorMetricDataResult.h"
#include "model/PutLogMonitorRequest.h"
#include "model/PutLogMonitorResult.h"
#include "model/PutMetricRuleTargetsRequest.h"
#include "model/PutMetricRuleTargetsResult.h"
#include "model/PutMonitorGroupDynamicRuleRequest.h"
#include "model/PutMonitorGroupDynamicRuleResult.h"
#include "model/PutMonitoringConfigRequest.h"
#include "model/PutMonitoringConfigResult.h"
#include "model/PutResourceMetricRuleRequest.h"
#include "model/PutResourceMetricRuleResult.h"
#include "model/PutResourceMetricRulesRequest.h"
#include "model/PutResourceMetricRulesResult.h"
#include "model/RemoveTagsRequest.h"
#include "model/RemoveTagsResult.h"
#include "model/SendDryRunSystemEventRequest.h"
#include "model/SendDryRunSystemEventResult.h"
#include "model/UninstallMonitoringAgentRequest.h"
#include "model/UninstallMonitoringAgentResult.h"


namespace AlibabaCloud
{
	namespace Cms
	{
		class ALIBABACLOUD_CMS_EXPORT CmsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddTagsResult> AddTagsOutcome;
			typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::AddTagsRequest&, const AddTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTagsAsyncHandler;
			typedef Outcome<Error, Model::ApplyMetricRuleTemplateResult> ApplyMetricRuleTemplateOutcome;
			typedef std::future<ApplyMetricRuleTemplateOutcome> ApplyMetricRuleTemplateOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ApplyMetricRuleTemplateRequest&, const ApplyMetricRuleTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyMetricRuleTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateCmsCallNumOrderResult> CreateCmsCallNumOrderOutcome;
			typedef std::future<CreateCmsCallNumOrderOutcome> CreateCmsCallNumOrderOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateCmsCallNumOrderRequest&, const CreateCmsCallNumOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCmsCallNumOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateCmsOrderResult> CreateCmsOrderOutcome;
			typedef std::future<CreateCmsOrderOutcome> CreateCmsOrderOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateCmsOrderRequest&, const CreateCmsOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCmsOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateCmsSmspackageOrderResult> CreateCmsSmspackageOrderOutcome;
			typedef std::future<CreateCmsSmspackageOrderOutcome> CreateCmsSmspackageOrderOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateCmsSmspackageOrderRequest&, const CreateCmsSmspackageOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCmsSmspackageOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateDynamicTagGroupResult> CreateDynamicTagGroupOutcome;
			typedef std::future<CreateDynamicTagGroupOutcome> CreateDynamicTagGroupOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateDynamicTagGroupRequest&, const CreateDynamicTagGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDynamicTagGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateGroupMetricRulesResult> CreateGroupMetricRulesOutcome;
			typedef std::future<CreateGroupMetricRulesOutcome> CreateGroupMetricRulesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateGroupMetricRulesRequest&, const CreateGroupMetricRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupMetricRulesAsyncHandler;
			typedef Outcome<Error, Model::CreateGroupMonitoringAgentProcessResult> CreateGroupMonitoringAgentProcessOutcome;
			typedef std::future<CreateGroupMonitoringAgentProcessOutcome> CreateGroupMonitoringAgentProcessOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateGroupMonitoringAgentProcessRequest&, const CreateGroupMonitoringAgentProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupMonitoringAgentProcessAsyncHandler;
			typedef Outcome<Error, Model::CreateHostAvailabilityResult> CreateHostAvailabilityOutcome;
			typedef std::future<CreateHostAvailabilityOutcome> CreateHostAvailabilityOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateHostAvailabilityRequest&, const CreateHostAvailabilityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHostAvailabilityAsyncHandler;
			typedef Outcome<Error, Model::CreateInstantSiteMonitorResult> CreateInstantSiteMonitorOutcome;
			typedef std::future<CreateInstantSiteMonitorOutcome> CreateInstantSiteMonitorOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateInstantSiteMonitorRequest&, const CreateInstantSiteMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstantSiteMonitorAsyncHandler;
			typedef Outcome<Error, Model::CreateMetricRuleResourcesResult> CreateMetricRuleResourcesOutcome;
			typedef std::future<CreateMetricRuleResourcesOutcome> CreateMetricRuleResourcesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateMetricRuleResourcesRequest&, const CreateMetricRuleResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMetricRuleResourcesAsyncHandler;
			typedef Outcome<Error, Model::CreateMetricRuleTemplateResult> CreateMetricRuleTemplateOutcome;
			typedef std::future<CreateMetricRuleTemplateOutcome> CreateMetricRuleTemplateOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateMetricRuleTemplateRequest&, const CreateMetricRuleTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMetricRuleTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateMonitorAgentProcessResult> CreateMonitorAgentProcessOutcome;
			typedef std::future<CreateMonitorAgentProcessOutcome> CreateMonitorAgentProcessOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateMonitorAgentProcessRequest&, const CreateMonitorAgentProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMonitorAgentProcessAsyncHandler;
			typedef Outcome<Error, Model::CreateMonitorGroupResult> CreateMonitorGroupOutcome;
			typedef std::future<CreateMonitorGroupOutcome> CreateMonitorGroupOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateMonitorGroupRequest&, const CreateMonitorGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMonitorGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateMonitorGroupByResourceGroupIdResult> CreateMonitorGroupByResourceGroupIdOutcome;
			typedef std::future<CreateMonitorGroupByResourceGroupIdOutcome> CreateMonitorGroupByResourceGroupIdOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateMonitorGroupByResourceGroupIdRequest&, const CreateMonitorGroupByResourceGroupIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMonitorGroupByResourceGroupIdAsyncHandler;
			typedef Outcome<Error, Model::CreateMonitorGroupInstancesResult> CreateMonitorGroupInstancesOutcome;
			typedef std::future<CreateMonitorGroupInstancesOutcome> CreateMonitorGroupInstancesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateMonitorGroupInstancesRequest&, const CreateMonitorGroupInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMonitorGroupInstancesAsyncHandler;
			typedef Outcome<Error, Model::CreateMonitorGroupNotifyPolicyResult> CreateMonitorGroupNotifyPolicyOutcome;
			typedef std::future<CreateMonitorGroupNotifyPolicyOutcome> CreateMonitorGroupNotifyPolicyOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateMonitorGroupNotifyPolicyRequest&, const CreateMonitorGroupNotifyPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMonitorGroupNotifyPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateMonitoringAgentProcessResult> CreateMonitoringAgentProcessOutcome;
			typedef std::future<CreateMonitoringAgentProcessOutcome> CreateMonitoringAgentProcessOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateMonitoringAgentProcessRequest&, const CreateMonitoringAgentProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMonitoringAgentProcessAsyncHandler;
			typedef Outcome<Error, Model::CreateSiteMonitorResult> CreateSiteMonitorOutcome;
			typedef std::future<CreateSiteMonitorOutcome> CreateSiteMonitorOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::CreateSiteMonitorRequest&, const CreateSiteMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSiteMonitorAsyncHandler;
			typedef Outcome<Error, Model::DeleteContactResult> DeleteContactOutcome;
			typedef std::future<DeleteContactOutcome> DeleteContactOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteContactRequest&, const DeleteContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContactAsyncHandler;
			typedef Outcome<Error, Model::DeleteContactGroupResult> DeleteContactGroupOutcome;
			typedef std::future<DeleteContactGroupOutcome> DeleteContactGroupOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteContactGroupRequest&, const DeleteContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContactGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomMetricResult> DeleteCustomMetricOutcome;
			typedef std::future<DeleteCustomMetricOutcome> DeleteCustomMetricOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteCustomMetricRequest&, const DeleteCustomMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomMetricAsyncHandler;
			typedef Outcome<Error, Model::DeleteDynamicTagGroupResult> DeleteDynamicTagGroupOutcome;
			typedef std::future<DeleteDynamicTagGroupOutcome> DeleteDynamicTagGroupOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteDynamicTagGroupRequest&, const DeleteDynamicTagGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDynamicTagGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteEventRuleTargetsResult> DeleteEventRuleTargetsOutcome;
			typedef std::future<DeleteEventRuleTargetsOutcome> DeleteEventRuleTargetsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteEventRuleTargetsRequest&, const DeleteEventRuleTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEventRuleTargetsAsyncHandler;
			typedef Outcome<Error, Model::DeleteEventRulesResult> DeleteEventRulesOutcome;
			typedef std::future<DeleteEventRulesOutcome> DeleteEventRulesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteEventRulesRequest&, const DeleteEventRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEventRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteExporterOutputResult> DeleteExporterOutputOutcome;
			typedef std::future<DeleteExporterOutputOutcome> DeleteExporterOutputOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteExporterOutputRequest&, const DeleteExporterOutputOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExporterOutputAsyncHandler;
			typedef Outcome<Error, Model::DeleteExporterRuleResult> DeleteExporterRuleOutcome;
			typedef std::future<DeleteExporterRuleOutcome> DeleteExporterRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteExporterRuleRequest&, const DeleteExporterRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExporterRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupMonitoringAgentProcessResult> DeleteGroupMonitoringAgentProcessOutcome;
			typedef std::future<DeleteGroupMonitoringAgentProcessOutcome> DeleteGroupMonitoringAgentProcessOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteGroupMonitoringAgentProcessRequest&, const DeleteGroupMonitoringAgentProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupMonitoringAgentProcessAsyncHandler;
			typedef Outcome<Error, Model::DeleteHostAvailabilityResult> DeleteHostAvailabilityOutcome;
			typedef std::future<DeleteHostAvailabilityOutcome> DeleteHostAvailabilityOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteHostAvailabilityRequest&, const DeleteHostAvailabilityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHostAvailabilityAsyncHandler;
			typedef Outcome<Error, Model::DeleteLogMonitorResult> DeleteLogMonitorOutcome;
			typedef std::future<DeleteLogMonitorOutcome> DeleteLogMonitorOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteLogMonitorRequest&, const DeleteLogMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogMonitorAsyncHandler;
			typedef Outcome<Error, Model::DeleteMetricRuleResourcesResult> DeleteMetricRuleResourcesOutcome;
			typedef std::future<DeleteMetricRuleResourcesOutcome> DeleteMetricRuleResourcesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteMetricRuleResourcesRequest&, const DeleteMetricRuleResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMetricRuleResourcesAsyncHandler;
			typedef Outcome<Error, Model::DeleteMetricRuleTargetsResult> DeleteMetricRuleTargetsOutcome;
			typedef std::future<DeleteMetricRuleTargetsOutcome> DeleteMetricRuleTargetsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteMetricRuleTargetsRequest&, const DeleteMetricRuleTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMetricRuleTargetsAsyncHandler;
			typedef Outcome<Error, Model::DeleteMetricRuleTemplateResult> DeleteMetricRuleTemplateOutcome;
			typedef std::future<DeleteMetricRuleTemplateOutcome> DeleteMetricRuleTemplateOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteMetricRuleTemplateRequest&, const DeleteMetricRuleTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMetricRuleTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteMetricRulesResult> DeleteMetricRulesOutcome;
			typedef std::future<DeleteMetricRulesOutcome> DeleteMetricRulesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteMetricRulesRequest&, const DeleteMetricRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMetricRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteMonitorGroupResult> DeleteMonitorGroupOutcome;
			typedef std::future<DeleteMonitorGroupOutcome> DeleteMonitorGroupOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteMonitorGroupRequest&, const DeleteMonitorGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMonitorGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteMonitorGroupDynamicRuleResult> DeleteMonitorGroupDynamicRuleOutcome;
			typedef std::future<DeleteMonitorGroupDynamicRuleOutcome> DeleteMonitorGroupDynamicRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteMonitorGroupDynamicRuleRequest&, const DeleteMonitorGroupDynamicRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMonitorGroupDynamicRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteMonitorGroupInstancesResult> DeleteMonitorGroupInstancesOutcome;
			typedef std::future<DeleteMonitorGroupInstancesOutcome> DeleteMonitorGroupInstancesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteMonitorGroupInstancesRequest&, const DeleteMonitorGroupInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMonitorGroupInstancesAsyncHandler;
			typedef Outcome<Error, Model::DeleteMonitorGroupNotifyPolicyResult> DeleteMonitorGroupNotifyPolicyOutcome;
			typedef std::future<DeleteMonitorGroupNotifyPolicyOutcome> DeleteMonitorGroupNotifyPolicyOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteMonitorGroupNotifyPolicyRequest&, const DeleteMonitorGroupNotifyPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMonitorGroupNotifyPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteMonitoringAgentProcessResult> DeleteMonitoringAgentProcessOutcome;
			typedef std::future<DeleteMonitoringAgentProcessOutcome> DeleteMonitoringAgentProcessOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteMonitoringAgentProcessRequest&, const DeleteMonitoringAgentProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMonitoringAgentProcessAsyncHandler;
			typedef Outcome<Error, Model::DeleteSiteMonitorsResult> DeleteSiteMonitorsOutcome;
			typedef std::future<DeleteSiteMonitorsOutcome> DeleteSiteMonitorsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DeleteSiteMonitorsRequest&, const DeleteSiteMonitorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSiteMonitorsAsyncHandler;
			typedef Outcome<Error, Model::DescribeActiveMetricRuleListResult> DescribeActiveMetricRuleListOutcome;
			typedef std::future<DescribeActiveMetricRuleListOutcome> DescribeActiveMetricRuleListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeActiveMetricRuleListRequest&, const DescribeActiveMetricRuleListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveMetricRuleListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertHistoryListResult> DescribeAlertHistoryListOutcome;
			typedef std::future<DescribeAlertHistoryListOutcome> DescribeAlertHistoryListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeAlertHistoryListRequest&, const DescribeAlertHistoryListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertHistoryListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertLogCountResult> DescribeAlertLogCountOutcome;
			typedef std::future<DescribeAlertLogCountOutcome> DescribeAlertLogCountOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeAlertLogCountRequest&, const DescribeAlertLogCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertLogCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertLogHistogramResult> DescribeAlertLogHistogramOutcome;
			typedef std::future<DescribeAlertLogHistogramOutcome> DescribeAlertLogHistogramOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeAlertLogHistogramRequest&, const DescribeAlertLogHistogramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertLogHistogramAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertLogListResult> DescribeAlertLogListOutcome;
			typedef std::future<DescribeAlertLogListOutcome> DescribeAlertLogListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeAlertLogListRequest&, const DescribeAlertLogListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertLogListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertingMetricRuleResourcesResult> DescribeAlertingMetricRuleResourcesOutcome;
			typedef std::future<DescribeAlertingMetricRuleResourcesOutcome> DescribeAlertingMetricRuleResourcesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeAlertingMetricRuleResourcesRequest&, const DescribeAlertingMetricRuleResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertingMetricRuleResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeContactGroupListResult> DescribeContactGroupListOutcome;
			typedef std::future<DescribeContactGroupListOutcome> DescribeContactGroupListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeContactGroupListRequest&, const DescribeContactGroupListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContactGroupListAsyncHandler;
			typedef Outcome<Error, Model::DescribeContactListResult> DescribeContactListOutcome;
			typedef std::future<DescribeContactListOutcome> DescribeContactListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeContactListRequest&, const DescribeContactListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContactListAsyncHandler;
			typedef Outcome<Error, Model::DescribeContactListByContactGroupResult> DescribeContactListByContactGroupOutcome;
			typedef std::future<DescribeContactListByContactGroupOutcome> DescribeContactListByContactGroupOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeContactListByContactGroupRequest&, const DescribeContactListByContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContactListByContactGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomEventAttributeResult> DescribeCustomEventAttributeOutcome;
			typedef std::future<DescribeCustomEventAttributeOutcome> DescribeCustomEventAttributeOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeCustomEventAttributeRequest&, const DescribeCustomEventAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomEventAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomEventCountResult> DescribeCustomEventCountOutcome;
			typedef std::future<DescribeCustomEventCountOutcome> DescribeCustomEventCountOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeCustomEventCountRequest&, const DescribeCustomEventCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomEventCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomEventHistogramResult> DescribeCustomEventHistogramOutcome;
			typedef std::future<DescribeCustomEventHistogramOutcome> DescribeCustomEventHistogramOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeCustomEventHistogramRequest&, const DescribeCustomEventHistogramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomEventHistogramAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomMetricListResult> DescribeCustomMetricListOutcome;
			typedef std::future<DescribeCustomMetricListOutcome> DescribeCustomMetricListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeCustomMetricListRequest&, const DescribeCustomMetricListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomMetricListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDynamicTagRuleListResult> DescribeDynamicTagRuleListOutcome;
			typedef std::future<DescribeDynamicTagRuleListOutcome> DescribeDynamicTagRuleListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeDynamicTagRuleListRequest&, const DescribeDynamicTagRuleListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDynamicTagRuleListAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventRuleAttributeResult> DescribeEventRuleAttributeOutcome;
			typedef std::future<DescribeEventRuleAttributeOutcome> DescribeEventRuleAttributeOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeEventRuleAttributeRequest&, const DescribeEventRuleAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventRuleAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventRuleListResult> DescribeEventRuleListOutcome;
			typedef std::future<DescribeEventRuleListOutcome> DescribeEventRuleListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeEventRuleListRequest&, const DescribeEventRuleListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventRuleListAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventRuleTargetListResult> DescribeEventRuleTargetListOutcome;
			typedef std::future<DescribeEventRuleTargetListOutcome> DescribeEventRuleTargetListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeEventRuleTargetListRequest&, const DescribeEventRuleTargetListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventRuleTargetListAsyncHandler;
			typedef Outcome<Error, Model::DescribeExporterOutputListResult> DescribeExporterOutputListOutcome;
			typedef std::future<DescribeExporterOutputListOutcome> DescribeExporterOutputListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeExporterOutputListRequest&, const DescribeExporterOutputListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExporterOutputListAsyncHandler;
			typedef Outcome<Error, Model::DescribeExporterRuleListResult> DescribeExporterRuleListOutcome;
			typedef std::future<DescribeExporterRuleListOutcome> DescribeExporterRuleListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeExporterRuleListRequest&, const DescribeExporterRuleListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExporterRuleListAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupMonitoringAgentProcessResult> DescribeGroupMonitoringAgentProcessOutcome;
			typedef std::future<DescribeGroupMonitoringAgentProcessOutcome> DescribeGroupMonitoringAgentProcessOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeGroupMonitoringAgentProcessRequest&, const DescribeGroupMonitoringAgentProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupMonitoringAgentProcessAsyncHandler;
			typedef Outcome<Error, Model::DescribeHostAvailabilityListResult> DescribeHostAvailabilityListOutcome;
			typedef std::future<DescribeHostAvailabilityListOutcome> DescribeHostAvailabilityListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeHostAvailabilityListRequest&, const DescribeHostAvailabilityListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostAvailabilityListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogMonitorAttributeResult> DescribeLogMonitorAttributeOutcome;
			typedef std::future<DescribeLogMonitorAttributeOutcome> DescribeLogMonitorAttributeOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeLogMonitorAttributeRequest&, const DescribeLogMonitorAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogMonitorAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogMonitorListResult> DescribeLogMonitorListOutcome;
			typedef std::future<DescribeLogMonitorListOutcome> DescribeLogMonitorListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeLogMonitorListRequest&, const DescribeLogMonitorListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogMonitorListAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetricDataResult> DescribeMetricDataOutcome;
			typedef std::future<DescribeMetricDataOutcome> DescribeMetricDataOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMetricDataRequest&, const DescribeMetricDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetricLastResult> DescribeMetricLastOutcome;
			typedef std::future<DescribeMetricLastOutcome> DescribeMetricLastOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMetricLastRequest&, const DescribeMetricLastOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricLastAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetricListResult> DescribeMetricListOutcome;
			typedef std::future<DescribeMetricListOutcome> DescribeMetricListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMetricListRequest&, const DescribeMetricListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricListAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetricMetaListResult> DescribeMetricMetaListOutcome;
			typedef std::future<DescribeMetricMetaListOutcome> DescribeMetricMetaListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMetricMetaListRequest&, const DescribeMetricMetaListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricMetaListAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetricRuleCountResult> DescribeMetricRuleCountOutcome;
			typedef std::future<DescribeMetricRuleCountOutcome> DescribeMetricRuleCountOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMetricRuleCountRequest&, const DescribeMetricRuleCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricRuleCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetricRuleListResult> DescribeMetricRuleListOutcome;
			typedef std::future<DescribeMetricRuleListOutcome> DescribeMetricRuleListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMetricRuleListRequest&, const DescribeMetricRuleListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricRuleListAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetricRuleTargetsResult> DescribeMetricRuleTargetsOutcome;
			typedef std::future<DescribeMetricRuleTargetsOutcome> DescribeMetricRuleTargetsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMetricRuleTargetsRequest&, const DescribeMetricRuleTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricRuleTargetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetricRuleTemplateAttributeResult> DescribeMetricRuleTemplateAttributeOutcome;
			typedef std::future<DescribeMetricRuleTemplateAttributeOutcome> DescribeMetricRuleTemplateAttributeOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMetricRuleTemplateAttributeRequest&, const DescribeMetricRuleTemplateAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricRuleTemplateAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetricRuleTemplateListResult> DescribeMetricRuleTemplateListOutcome;
			typedef std::future<DescribeMetricRuleTemplateListOutcome> DescribeMetricRuleTemplateListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMetricRuleTemplateListRequest&, const DescribeMetricRuleTemplateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricRuleTemplateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetricTopResult> DescribeMetricTopOutcome;
			typedef std::future<DescribeMetricTopOutcome> DescribeMetricTopOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMetricTopRequest&, const DescribeMetricTopOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricTopAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitorGroupCategoriesResult> DescribeMonitorGroupCategoriesOutcome;
			typedef std::future<DescribeMonitorGroupCategoriesOutcome> DescribeMonitorGroupCategoriesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMonitorGroupCategoriesRequest&, const DescribeMonitorGroupCategoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorGroupCategoriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitorGroupDynamicRulesResult> DescribeMonitorGroupDynamicRulesOutcome;
			typedef std::future<DescribeMonitorGroupDynamicRulesOutcome> DescribeMonitorGroupDynamicRulesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMonitorGroupDynamicRulesRequest&, const DescribeMonitorGroupDynamicRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorGroupDynamicRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitorGroupInstanceAttributeResult> DescribeMonitorGroupInstanceAttributeOutcome;
			typedef std::future<DescribeMonitorGroupInstanceAttributeOutcome> DescribeMonitorGroupInstanceAttributeOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMonitorGroupInstanceAttributeRequest&, const DescribeMonitorGroupInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorGroupInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitorGroupInstancesResult> DescribeMonitorGroupInstancesOutcome;
			typedef std::future<DescribeMonitorGroupInstancesOutcome> DescribeMonitorGroupInstancesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMonitorGroupInstancesRequest&, const DescribeMonitorGroupInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorGroupInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitorGroupNotifyPolicyListResult> DescribeMonitorGroupNotifyPolicyListOutcome;
			typedef std::future<DescribeMonitorGroupNotifyPolicyListOutcome> DescribeMonitorGroupNotifyPolicyListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMonitorGroupNotifyPolicyListRequest&, const DescribeMonitorGroupNotifyPolicyListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorGroupNotifyPolicyListAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitorGroupsResult> DescribeMonitorGroupsOutcome;
			typedef std::future<DescribeMonitorGroupsOutcome> DescribeMonitorGroupsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMonitorGroupsRequest&, const DescribeMonitorGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitorResourceQuotaAttributeResult> DescribeMonitorResourceQuotaAttributeOutcome;
			typedef std::future<DescribeMonitorResourceQuotaAttributeOutcome> DescribeMonitorResourceQuotaAttributeOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMonitorResourceQuotaAttributeRequest&, const DescribeMonitorResourceQuotaAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorResourceQuotaAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitoringAgentAccessKeyResult> DescribeMonitoringAgentAccessKeyOutcome;
			typedef std::future<DescribeMonitoringAgentAccessKeyOutcome> DescribeMonitoringAgentAccessKeyOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMonitoringAgentAccessKeyRequest&, const DescribeMonitoringAgentAccessKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitoringAgentAccessKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitoringAgentConfigResult> DescribeMonitoringAgentConfigOutcome;
			typedef std::future<DescribeMonitoringAgentConfigOutcome> DescribeMonitoringAgentConfigOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMonitoringAgentConfigRequest&, const DescribeMonitoringAgentConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitoringAgentConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitoringAgentHostsResult> DescribeMonitoringAgentHostsOutcome;
			typedef std::future<DescribeMonitoringAgentHostsOutcome> DescribeMonitoringAgentHostsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMonitoringAgentHostsRequest&, const DescribeMonitoringAgentHostsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitoringAgentHostsAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitoringAgentProcessesResult> DescribeMonitoringAgentProcessesOutcome;
			typedef std::future<DescribeMonitoringAgentProcessesOutcome> DescribeMonitoringAgentProcessesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMonitoringAgentProcessesRequest&, const DescribeMonitoringAgentProcessesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitoringAgentProcessesAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitoringAgentStatusesResult> DescribeMonitoringAgentStatusesOutcome;
			typedef std::future<DescribeMonitoringAgentStatusesOutcome> DescribeMonitoringAgentStatusesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMonitoringAgentStatusesRequest&, const DescribeMonitoringAgentStatusesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitoringAgentStatusesAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitoringConfigResult> DescribeMonitoringConfigOutcome;
			typedef std::future<DescribeMonitoringConfigOutcome> DescribeMonitoringConfigOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeMonitoringConfigRequest&, const DescribeMonitoringConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitoringConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeProductResourceTagKeyListResult> DescribeProductResourceTagKeyListOutcome;
			typedef std::future<DescribeProductResourceTagKeyListOutcome> DescribeProductResourceTagKeyListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeProductResourceTagKeyListRequest&, const DescribeProductResourceTagKeyListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductResourceTagKeyListAsyncHandler;
			typedef Outcome<Error, Model::DescribeProductsOfActiveMetricRuleResult> DescribeProductsOfActiveMetricRuleOutcome;
			typedef std::future<DescribeProductsOfActiveMetricRuleOutcome> DescribeProductsOfActiveMetricRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeProductsOfActiveMetricRuleRequest&, const DescribeProductsOfActiveMetricRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductsOfActiveMetricRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeProjectMetaResult> DescribeProjectMetaOutcome;
			typedef std::future<DescribeProjectMetaOutcome> DescribeProjectMetaOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeProjectMetaRequest&, const DescribeProjectMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectMetaAsyncHandler;
			typedef Outcome<Error, Model::DescribeSiteMonitorAttributeResult> DescribeSiteMonitorAttributeOutcome;
			typedef std::future<DescribeSiteMonitorAttributeOutcome> DescribeSiteMonitorAttributeOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeSiteMonitorAttributeRequest&, const DescribeSiteMonitorAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSiteMonitorAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeSiteMonitorDataResult> DescribeSiteMonitorDataOutcome;
			typedef std::future<DescribeSiteMonitorDataOutcome> DescribeSiteMonitorDataOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeSiteMonitorDataRequest&, const DescribeSiteMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSiteMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeSiteMonitorISPCityListResult> DescribeSiteMonitorISPCityListOutcome;
			typedef std::future<DescribeSiteMonitorISPCityListOutcome> DescribeSiteMonitorISPCityListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeSiteMonitorISPCityListRequest&, const DescribeSiteMonitorISPCityListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSiteMonitorISPCityListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSiteMonitorListResult> DescribeSiteMonitorListOutcome;
			typedef std::future<DescribeSiteMonitorListOutcome> DescribeSiteMonitorListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeSiteMonitorListRequest&, const DescribeSiteMonitorListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSiteMonitorListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSiteMonitorLogResult> DescribeSiteMonitorLogOutcome;
			typedef std::future<DescribeSiteMonitorLogOutcome> DescribeSiteMonitorLogOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeSiteMonitorLogRequest&, const DescribeSiteMonitorLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSiteMonitorLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeSiteMonitorQuotaResult> DescribeSiteMonitorQuotaOutcome;
			typedef std::future<DescribeSiteMonitorQuotaOutcome> DescribeSiteMonitorQuotaOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeSiteMonitorQuotaRequest&, const DescribeSiteMonitorQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSiteMonitorQuotaAsyncHandler;
			typedef Outcome<Error, Model::DescribeSiteMonitorStatisticsResult> DescribeSiteMonitorStatisticsOutcome;
			typedef std::future<DescribeSiteMonitorStatisticsOutcome> DescribeSiteMonitorStatisticsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeSiteMonitorStatisticsRequest&, const DescribeSiteMonitorStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSiteMonitorStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSystemEventAttributeResult> DescribeSystemEventAttributeOutcome;
			typedef std::future<DescribeSystemEventAttributeOutcome> DescribeSystemEventAttributeOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeSystemEventAttributeRequest&, const DescribeSystemEventAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSystemEventAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeSystemEventCountResult> DescribeSystemEventCountOutcome;
			typedef std::future<DescribeSystemEventCountOutcome> DescribeSystemEventCountOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeSystemEventCountRequest&, const DescribeSystemEventCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSystemEventCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeSystemEventHistogramResult> DescribeSystemEventHistogramOutcome;
			typedef std::future<DescribeSystemEventHistogramOutcome> DescribeSystemEventHistogramOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeSystemEventHistogramRequest&, const DescribeSystemEventHistogramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSystemEventHistogramAsyncHandler;
			typedef Outcome<Error, Model::DescribeSystemEventMetaListResult> DescribeSystemEventMetaListOutcome;
			typedef std::future<DescribeSystemEventMetaListOutcome> DescribeSystemEventMetaListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeSystemEventMetaListRequest&, const DescribeSystemEventMetaListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSystemEventMetaListAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagKeyListResult> DescribeTagKeyListOutcome;
			typedef std::future<DescribeTagKeyListOutcome> DescribeTagKeyListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeTagKeyListRequest&, const DescribeTagKeyListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagKeyListAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagValueListResult> DescribeTagValueListOutcome;
			typedef std::future<DescribeTagValueListOutcome> DescribeTagValueListOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeTagValueListRequest&, const DescribeTagValueListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagValueListAsyncHandler;
			typedef Outcome<Error, Model::DescribeUnhealthyHostAvailabilityResult> DescribeUnhealthyHostAvailabilityOutcome;
			typedef std::future<DescribeUnhealthyHostAvailabilityOutcome> DescribeUnhealthyHostAvailabilityOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DescribeUnhealthyHostAvailabilityRequest&, const DescribeUnhealthyHostAvailabilityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnhealthyHostAvailabilityAsyncHandler;
			typedef Outcome<Error, Model::DisableActiveMetricRuleResult> DisableActiveMetricRuleOutcome;
			typedef std::future<DisableActiveMetricRuleOutcome> DisableActiveMetricRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DisableActiveMetricRuleRequest&, const DisableActiveMetricRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableActiveMetricRuleAsyncHandler;
			typedef Outcome<Error, Model::DisableEventRulesResult> DisableEventRulesOutcome;
			typedef std::future<DisableEventRulesOutcome> DisableEventRulesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DisableEventRulesRequest&, const DisableEventRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableEventRulesAsyncHandler;
			typedef Outcome<Error, Model::DisableHostAvailabilityResult> DisableHostAvailabilityOutcome;
			typedef std::future<DisableHostAvailabilityOutcome> DisableHostAvailabilityOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DisableHostAvailabilityRequest&, const DisableHostAvailabilityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableHostAvailabilityAsyncHandler;
			typedef Outcome<Error, Model::DisableMetricRulesResult> DisableMetricRulesOutcome;
			typedef std::future<DisableMetricRulesOutcome> DisableMetricRulesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DisableMetricRulesRequest&, const DisableMetricRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableMetricRulesAsyncHandler;
			typedef Outcome<Error, Model::DisableSiteMonitorsResult> DisableSiteMonitorsOutcome;
			typedef std::future<DisableSiteMonitorsOutcome> DisableSiteMonitorsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::DisableSiteMonitorsRequest&, const DisableSiteMonitorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableSiteMonitorsAsyncHandler;
			typedef Outcome<Error, Model::EnableActiveMetricRuleResult> EnableActiveMetricRuleOutcome;
			typedef std::future<EnableActiveMetricRuleOutcome> EnableActiveMetricRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::EnableActiveMetricRuleRequest&, const EnableActiveMetricRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableActiveMetricRuleAsyncHandler;
			typedef Outcome<Error, Model::EnableEventRulesResult> EnableEventRulesOutcome;
			typedef std::future<EnableEventRulesOutcome> EnableEventRulesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::EnableEventRulesRequest&, const EnableEventRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableEventRulesAsyncHandler;
			typedef Outcome<Error, Model::EnableHostAvailabilityResult> EnableHostAvailabilityOutcome;
			typedef std::future<EnableHostAvailabilityOutcome> EnableHostAvailabilityOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::EnableHostAvailabilityRequest&, const EnableHostAvailabilityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableHostAvailabilityAsyncHandler;
			typedef Outcome<Error, Model::EnableMetricRulesResult> EnableMetricRulesOutcome;
			typedef std::future<EnableMetricRulesOutcome> EnableMetricRulesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::EnableMetricRulesRequest&, const EnableMetricRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableMetricRulesAsyncHandler;
			typedef Outcome<Error, Model::EnableSiteMonitorsResult> EnableSiteMonitorsOutcome;
			typedef std::future<EnableSiteMonitorsOutcome> EnableSiteMonitorsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::EnableSiteMonitorsRequest&, const EnableSiteMonitorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableSiteMonitorsAsyncHandler;
			typedef Outcome<Error, Model::InstallMonitoringAgentResult> InstallMonitoringAgentOutcome;
			typedef std::future<InstallMonitoringAgentOutcome> InstallMonitoringAgentOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::InstallMonitoringAgentRequest&, const InstallMonitoringAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallMonitoringAgentAsyncHandler;
			typedef Outcome<Error, Model::ModifyGroupMonitoringAgentProcessResult> ModifyGroupMonitoringAgentProcessOutcome;
			typedef std::future<ModifyGroupMonitoringAgentProcessOutcome> ModifyGroupMonitoringAgentProcessOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ModifyGroupMonitoringAgentProcessRequest&, const ModifyGroupMonitoringAgentProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupMonitoringAgentProcessAsyncHandler;
			typedef Outcome<Error, Model::ModifyHostAvailabilityResult> ModifyHostAvailabilityOutcome;
			typedef std::future<ModifyHostAvailabilityOutcome> ModifyHostAvailabilityOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ModifyHostAvailabilityRequest&, const ModifyHostAvailabilityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostAvailabilityAsyncHandler;
			typedef Outcome<Error, Model::ModifyHostInfoResult> ModifyHostInfoOutcome;
			typedef std::future<ModifyHostInfoOutcome> ModifyHostInfoOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ModifyHostInfoRequest&, const ModifyHostInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostInfoAsyncHandler;
			typedef Outcome<Error, Model::ModifyMetricRuleTemplateResult> ModifyMetricRuleTemplateOutcome;
			typedef std::future<ModifyMetricRuleTemplateOutcome> ModifyMetricRuleTemplateOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ModifyMetricRuleTemplateRequest&, const ModifyMetricRuleTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMetricRuleTemplateAsyncHandler;
			typedef Outcome<Error, Model::ModifyMonitorGroupResult> ModifyMonitorGroupOutcome;
			typedef std::future<ModifyMonitorGroupOutcome> ModifyMonitorGroupOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ModifyMonitorGroupRequest&, const ModifyMonitorGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMonitorGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyMonitorGroupInstancesResult> ModifyMonitorGroupInstancesOutcome;
			typedef std::future<ModifyMonitorGroupInstancesOutcome> ModifyMonitorGroupInstancesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ModifyMonitorGroupInstancesRequest&, const ModifyMonitorGroupInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMonitorGroupInstancesAsyncHandler;
			typedef Outcome<Error, Model::ModifySiteMonitorResult> ModifySiteMonitorOutcome;
			typedef std::future<ModifySiteMonitorOutcome> ModifySiteMonitorOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::ModifySiteMonitorRequest&, const ModifySiteMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySiteMonitorAsyncHandler;
			typedef Outcome<Error, Model::OpenCmsServiceResult> OpenCmsServiceOutcome;
			typedef std::future<OpenCmsServiceOutcome> OpenCmsServiceOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::OpenCmsServiceRequest&, const OpenCmsServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenCmsServiceAsyncHandler;
			typedef Outcome<Error, Model::PutContactResult> PutContactOutcome;
			typedef std::future<PutContactOutcome> PutContactOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutContactRequest&, const PutContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutContactAsyncHandler;
			typedef Outcome<Error, Model::PutContactGroupResult> PutContactGroupOutcome;
			typedef std::future<PutContactGroupOutcome> PutContactGroupOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutContactGroupRequest&, const PutContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutContactGroupAsyncHandler;
			typedef Outcome<Error, Model::PutCustomEventResult> PutCustomEventOutcome;
			typedef std::future<PutCustomEventOutcome> PutCustomEventOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutCustomEventRequest&, const PutCustomEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutCustomEventAsyncHandler;
			typedef Outcome<Error, Model::PutCustomEventRuleResult> PutCustomEventRuleOutcome;
			typedef std::future<PutCustomEventRuleOutcome> PutCustomEventRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutCustomEventRuleRequest&, const PutCustomEventRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutCustomEventRuleAsyncHandler;
			typedef Outcome<Error, Model::PutCustomMetricResult> PutCustomMetricOutcome;
			typedef std::future<PutCustomMetricOutcome> PutCustomMetricOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutCustomMetricRequest&, const PutCustomMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutCustomMetricAsyncHandler;
			typedef Outcome<Error, Model::PutCustomMetricRuleResult> PutCustomMetricRuleOutcome;
			typedef std::future<PutCustomMetricRuleOutcome> PutCustomMetricRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutCustomMetricRuleRequest&, const PutCustomMetricRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutCustomMetricRuleAsyncHandler;
			typedef Outcome<Error, Model::PutEventRuleResult> PutEventRuleOutcome;
			typedef std::future<PutEventRuleOutcome> PutEventRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutEventRuleRequest&, const PutEventRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutEventRuleAsyncHandler;
			typedef Outcome<Error, Model::PutEventRuleTargetsResult> PutEventRuleTargetsOutcome;
			typedef std::future<PutEventRuleTargetsOutcome> PutEventRuleTargetsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutEventRuleTargetsRequest&, const PutEventRuleTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutEventRuleTargetsAsyncHandler;
			typedef Outcome<Error, Model::PutExporterOutputResult> PutExporterOutputOutcome;
			typedef std::future<PutExporterOutputOutcome> PutExporterOutputOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutExporterOutputRequest&, const PutExporterOutputOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutExporterOutputAsyncHandler;
			typedef Outcome<Error, Model::PutExporterRuleResult> PutExporterRuleOutcome;
			typedef std::future<PutExporterRuleOutcome> PutExporterRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutExporterRuleRequest&, const PutExporterRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutExporterRuleAsyncHandler;
			typedef Outcome<Error, Model::PutGroupMetricRuleResult> PutGroupMetricRuleOutcome;
			typedef std::future<PutGroupMetricRuleOutcome> PutGroupMetricRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutGroupMetricRuleRequest&, const PutGroupMetricRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutGroupMetricRuleAsyncHandler;
			typedef Outcome<Error, Model::PutHybridMonitorMetricDataResult> PutHybridMonitorMetricDataOutcome;
			typedef std::future<PutHybridMonitorMetricDataOutcome> PutHybridMonitorMetricDataOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutHybridMonitorMetricDataRequest&, const PutHybridMonitorMetricDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutHybridMonitorMetricDataAsyncHandler;
			typedef Outcome<Error, Model::PutLogMonitorResult> PutLogMonitorOutcome;
			typedef std::future<PutLogMonitorOutcome> PutLogMonitorOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutLogMonitorRequest&, const PutLogMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutLogMonitorAsyncHandler;
			typedef Outcome<Error, Model::PutMetricRuleTargetsResult> PutMetricRuleTargetsOutcome;
			typedef std::future<PutMetricRuleTargetsOutcome> PutMetricRuleTargetsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutMetricRuleTargetsRequest&, const PutMetricRuleTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutMetricRuleTargetsAsyncHandler;
			typedef Outcome<Error, Model::PutMonitorGroupDynamicRuleResult> PutMonitorGroupDynamicRuleOutcome;
			typedef std::future<PutMonitorGroupDynamicRuleOutcome> PutMonitorGroupDynamicRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutMonitorGroupDynamicRuleRequest&, const PutMonitorGroupDynamicRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutMonitorGroupDynamicRuleAsyncHandler;
			typedef Outcome<Error, Model::PutMonitoringConfigResult> PutMonitoringConfigOutcome;
			typedef std::future<PutMonitoringConfigOutcome> PutMonitoringConfigOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutMonitoringConfigRequest&, const PutMonitoringConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutMonitoringConfigAsyncHandler;
			typedef Outcome<Error, Model::PutResourceMetricRuleResult> PutResourceMetricRuleOutcome;
			typedef std::future<PutResourceMetricRuleOutcome> PutResourceMetricRuleOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutResourceMetricRuleRequest&, const PutResourceMetricRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutResourceMetricRuleAsyncHandler;
			typedef Outcome<Error, Model::PutResourceMetricRulesResult> PutResourceMetricRulesOutcome;
			typedef std::future<PutResourceMetricRulesOutcome> PutResourceMetricRulesOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::PutResourceMetricRulesRequest&, const PutResourceMetricRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutResourceMetricRulesAsyncHandler;
			typedef Outcome<Error, Model::RemoveTagsResult> RemoveTagsOutcome;
			typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::RemoveTagsRequest&, const RemoveTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTagsAsyncHandler;
			typedef Outcome<Error, Model::SendDryRunSystemEventResult> SendDryRunSystemEventOutcome;
			typedef std::future<SendDryRunSystemEventOutcome> SendDryRunSystemEventOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::SendDryRunSystemEventRequest&, const SendDryRunSystemEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendDryRunSystemEventAsyncHandler;
			typedef Outcome<Error, Model::UninstallMonitoringAgentResult> UninstallMonitoringAgentOutcome;
			typedef std::future<UninstallMonitoringAgentOutcome> UninstallMonitoringAgentOutcomeCallable;
			typedef std::function<void(const CmsClient*, const Model::UninstallMonitoringAgentRequest&, const UninstallMonitoringAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UninstallMonitoringAgentAsyncHandler;

			CmsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CmsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CmsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CmsClient();
			AddTagsOutcome addTags(const Model::AddTagsRequest &request)const;
			void addTagsAsync(const Model::AddTagsRequest& request, const AddTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTagsOutcomeCallable addTagsCallable(const Model::AddTagsRequest& request) const;
			ApplyMetricRuleTemplateOutcome applyMetricRuleTemplate(const Model::ApplyMetricRuleTemplateRequest &request)const;
			void applyMetricRuleTemplateAsync(const Model::ApplyMetricRuleTemplateRequest& request, const ApplyMetricRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyMetricRuleTemplateOutcomeCallable applyMetricRuleTemplateCallable(const Model::ApplyMetricRuleTemplateRequest& request) const;
			CreateCmsCallNumOrderOutcome createCmsCallNumOrder(const Model::CreateCmsCallNumOrderRequest &request)const;
			void createCmsCallNumOrderAsync(const Model::CreateCmsCallNumOrderRequest& request, const CreateCmsCallNumOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCmsCallNumOrderOutcomeCallable createCmsCallNumOrderCallable(const Model::CreateCmsCallNumOrderRequest& request) const;
			CreateCmsOrderOutcome createCmsOrder(const Model::CreateCmsOrderRequest &request)const;
			void createCmsOrderAsync(const Model::CreateCmsOrderRequest& request, const CreateCmsOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCmsOrderOutcomeCallable createCmsOrderCallable(const Model::CreateCmsOrderRequest& request) const;
			CreateCmsSmspackageOrderOutcome createCmsSmspackageOrder(const Model::CreateCmsSmspackageOrderRequest &request)const;
			void createCmsSmspackageOrderAsync(const Model::CreateCmsSmspackageOrderRequest& request, const CreateCmsSmspackageOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCmsSmspackageOrderOutcomeCallable createCmsSmspackageOrderCallable(const Model::CreateCmsSmspackageOrderRequest& request) const;
			CreateDynamicTagGroupOutcome createDynamicTagGroup(const Model::CreateDynamicTagGroupRequest &request)const;
			void createDynamicTagGroupAsync(const Model::CreateDynamicTagGroupRequest& request, const CreateDynamicTagGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDynamicTagGroupOutcomeCallable createDynamicTagGroupCallable(const Model::CreateDynamicTagGroupRequest& request) const;
			CreateGroupMetricRulesOutcome createGroupMetricRules(const Model::CreateGroupMetricRulesRequest &request)const;
			void createGroupMetricRulesAsync(const Model::CreateGroupMetricRulesRequest& request, const CreateGroupMetricRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGroupMetricRulesOutcomeCallable createGroupMetricRulesCallable(const Model::CreateGroupMetricRulesRequest& request) const;
			CreateGroupMonitoringAgentProcessOutcome createGroupMonitoringAgentProcess(const Model::CreateGroupMonitoringAgentProcessRequest &request)const;
			void createGroupMonitoringAgentProcessAsync(const Model::CreateGroupMonitoringAgentProcessRequest& request, const CreateGroupMonitoringAgentProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGroupMonitoringAgentProcessOutcomeCallable createGroupMonitoringAgentProcessCallable(const Model::CreateGroupMonitoringAgentProcessRequest& request) const;
			CreateHostAvailabilityOutcome createHostAvailability(const Model::CreateHostAvailabilityRequest &request)const;
			void createHostAvailabilityAsync(const Model::CreateHostAvailabilityRequest& request, const CreateHostAvailabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHostAvailabilityOutcomeCallable createHostAvailabilityCallable(const Model::CreateHostAvailabilityRequest& request) const;
			CreateInstantSiteMonitorOutcome createInstantSiteMonitor(const Model::CreateInstantSiteMonitorRequest &request)const;
			void createInstantSiteMonitorAsync(const Model::CreateInstantSiteMonitorRequest& request, const CreateInstantSiteMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstantSiteMonitorOutcomeCallable createInstantSiteMonitorCallable(const Model::CreateInstantSiteMonitorRequest& request) const;
			CreateMetricRuleResourcesOutcome createMetricRuleResources(const Model::CreateMetricRuleResourcesRequest &request)const;
			void createMetricRuleResourcesAsync(const Model::CreateMetricRuleResourcesRequest& request, const CreateMetricRuleResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMetricRuleResourcesOutcomeCallable createMetricRuleResourcesCallable(const Model::CreateMetricRuleResourcesRequest& request) const;
			CreateMetricRuleTemplateOutcome createMetricRuleTemplate(const Model::CreateMetricRuleTemplateRequest &request)const;
			void createMetricRuleTemplateAsync(const Model::CreateMetricRuleTemplateRequest& request, const CreateMetricRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMetricRuleTemplateOutcomeCallable createMetricRuleTemplateCallable(const Model::CreateMetricRuleTemplateRequest& request) const;
			CreateMonitorAgentProcessOutcome createMonitorAgentProcess(const Model::CreateMonitorAgentProcessRequest &request)const;
			void createMonitorAgentProcessAsync(const Model::CreateMonitorAgentProcessRequest& request, const CreateMonitorAgentProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMonitorAgentProcessOutcomeCallable createMonitorAgentProcessCallable(const Model::CreateMonitorAgentProcessRequest& request) const;
			CreateMonitorGroupOutcome createMonitorGroup(const Model::CreateMonitorGroupRequest &request)const;
			void createMonitorGroupAsync(const Model::CreateMonitorGroupRequest& request, const CreateMonitorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMonitorGroupOutcomeCallable createMonitorGroupCallable(const Model::CreateMonitorGroupRequest& request) const;
			CreateMonitorGroupByResourceGroupIdOutcome createMonitorGroupByResourceGroupId(const Model::CreateMonitorGroupByResourceGroupIdRequest &request)const;
			void createMonitorGroupByResourceGroupIdAsync(const Model::CreateMonitorGroupByResourceGroupIdRequest& request, const CreateMonitorGroupByResourceGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMonitorGroupByResourceGroupIdOutcomeCallable createMonitorGroupByResourceGroupIdCallable(const Model::CreateMonitorGroupByResourceGroupIdRequest& request) const;
			CreateMonitorGroupInstancesOutcome createMonitorGroupInstances(const Model::CreateMonitorGroupInstancesRequest &request)const;
			void createMonitorGroupInstancesAsync(const Model::CreateMonitorGroupInstancesRequest& request, const CreateMonitorGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMonitorGroupInstancesOutcomeCallable createMonitorGroupInstancesCallable(const Model::CreateMonitorGroupInstancesRequest& request) const;
			CreateMonitorGroupNotifyPolicyOutcome createMonitorGroupNotifyPolicy(const Model::CreateMonitorGroupNotifyPolicyRequest &request)const;
			void createMonitorGroupNotifyPolicyAsync(const Model::CreateMonitorGroupNotifyPolicyRequest& request, const CreateMonitorGroupNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMonitorGroupNotifyPolicyOutcomeCallable createMonitorGroupNotifyPolicyCallable(const Model::CreateMonitorGroupNotifyPolicyRequest& request) const;
			CreateMonitoringAgentProcessOutcome createMonitoringAgentProcess(const Model::CreateMonitoringAgentProcessRequest &request)const;
			void createMonitoringAgentProcessAsync(const Model::CreateMonitoringAgentProcessRequest& request, const CreateMonitoringAgentProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMonitoringAgentProcessOutcomeCallable createMonitoringAgentProcessCallable(const Model::CreateMonitoringAgentProcessRequest& request) const;
			CreateSiteMonitorOutcome createSiteMonitor(const Model::CreateSiteMonitorRequest &request)const;
			void createSiteMonitorAsync(const Model::CreateSiteMonitorRequest& request, const CreateSiteMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSiteMonitorOutcomeCallable createSiteMonitorCallable(const Model::CreateSiteMonitorRequest& request) const;
			DeleteContactOutcome deleteContact(const Model::DeleteContactRequest &request)const;
			void deleteContactAsync(const Model::DeleteContactRequest& request, const DeleteContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteContactOutcomeCallable deleteContactCallable(const Model::DeleteContactRequest& request) const;
			DeleteContactGroupOutcome deleteContactGroup(const Model::DeleteContactGroupRequest &request)const;
			void deleteContactGroupAsync(const Model::DeleteContactGroupRequest& request, const DeleteContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteContactGroupOutcomeCallable deleteContactGroupCallable(const Model::DeleteContactGroupRequest& request) const;
			DeleteCustomMetricOutcome deleteCustomMetric(const Model::DeleteCustomMetricRequest &request)const;
			void deleteCustomMetricAsync(const Model::DeleteCustomMetricRequest& request, const DeleteCustomMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomMetricOutcomeCallable deleteCustomMetricCallable(const Model::DeleteCustomMetricRequest& request) const;
			DeleteDynamicTagGroupOutcome deleteDynamicTagGroup(const Model::DeleteDynamicTagGroupRequest &request)const;
			void deleteDynamicTagGroupAsync(const Model::DeleteDynamicTagGroupRequest& request, const DeleteDynamicTagGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDynamicTagGroupOutcomeCallable deleteDynamicTagGroupCallable(const Model::DeleteDynamicTagGroupRequest& request) const;
			DeleteEventRuleTargetsOutcome deleteEventRuleTargets(const Model::DeleteEventRuleTargetsRequest &request)const;
			void deleteEventRuleTargetsAsync(const Model::DeleteEventRuleTargetsRequest& request, const DeleteEventRuleTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEventRuleTargetsOutcomeCallable deleteEventRuleTargetsCallable(const Model::DeleteEventRuleTargetsRequest& request) const;
			DeleteEventRulesOutcome deleteEventRules(const Model::DeleteEventRulesRequest &request)const;
			void deleteEventRulesAsync(const Model::DeleteEventRulesRequest& request, const DeleteEventRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEventRulesOutcomeCallable deleteEventRulesCallable(const Model::DeleteEventRulesRequest& request) const;
			DeleteExporterOutputOutcome deleteExporterOutput(const Model::DeleteExporterOutputRequest &request)const;
			void deleteExporterOutputAsync(const Model::DeleteExporterOutputRequest& request, const DeleteExporterOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteExporterOutputOutcomeCallable deleteExporterOutputCallable(const Model::DeleteExporterOutputRequest& request) const;
			DeleteExporterRuleOutcome deleteExporterRule(const Model::DeleteExporterRuleRequest &request)const;
			void deleteExporterRuleAsync(const Model::DeleteExporterRuleRequest& request, const DeleteExporterRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteExporterRuleOutcomeCallable deleteExporterRuleCallable(const Model::DeleteExporterRuleRequest& request) const;
			DeleteGroupMonitoringAgentProcessOutcome deleteGroupMonitoringAgentProcess(const Model::DeleteGroupMonitoringAgentProcessRequest &request)const;
			void deleteGroupMonitoringAgentProcessAsync(const Model::DeleteGroupMonitoringAgentProcessRequest& request, const DeleteGroupMonitoringAgentProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupMonitoringAgentProcessOutcomeCallable deleteGroupMonitoringAgentProcessCallable(const Model::DeleteGroupMonitoringAgentProcessRequest& request) const;
			DeleteHostAvailabilityOutcome deleteHostAvailability(const Model::DeleteHostAvailabilityRequest &request)const;
			void deleteHostAvailabilityAsync(const Model::DeleteHostAvailabilityRequest& request, const DeleteHostAvailabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHostAvailabilityOutcomeCallable deleteHostAvailabilityCallable(const Model::DeleteHostAvailabilityRequest& request) const;
			DeleteLogMonitorOutcome deleteLogMonitor(const Model::DeleteLogMonitorRequest &request)const;
			void deleteLogMonitorAsync(const Model::DeleteLogMonitorRequest& request, const DeleteLogMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLogMonitorOutcomeCallable deleteLogMonitorCallable(const Model::DeleteLogMonitorRequest& request) const;
			DeleteMetricRuleResourcesOutcome deleteMetricRuleResources(const Model::DeleteMetricRuleResourcesRequest &request)const;
			void deleteMetricRuleResourcesAsync(const Model::DeleteMetricRuleResourcesRequest& request, const DeleteMetricRuleResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMetricRuleResourcesOutcomeCallable deleteMetricRuleResourcesCallable(const Model::DeleteMetricRuleResourcesRequest& request) const;
			DeleteMetricRuleTargetsOutcome deleteMetricRuleTargets(const Model::DeleteMetricRuleTargetsRequest &request)const;
			void deleteMetricRuleTargetsAsync(const Model::DeleteMetricRuleTargetsRequest& request, const DeleteMetricRuleTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMetricRuleTargetsOutcomeCallable deleteMetricRuleTargetsCallable(const Model::DeleteMetricRuleTargetsRequest& request) const;
			DeleteMetricRuleTemplateOutcome deleteMetricRuleTemplate(const Model::DeleteMetricRuleTemplateRequest &request)const;
			void deleteMetricRuleTemplateAsync(const Model::DeleteMetricRuleTemplateRequest& request, const DeleteMetricRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMetricRuleTemplateOutcomeCallable deleteMetricRuleTemplateCallable(const Model::DeleteMetricRuleTemplateRequest& request) const;
			DeleteMetricRulesOutcome deleteMetricRules(const Model::DeleteMetricRulesRequest &request)const;
			void deleteMetricRulesAsync(const Model::DeleteMetricRulesRequest& request, const DeleteMetricRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMetricRulesOutcomeCallable deleteMetricRulesCallable(const Model::DeleteMetricRulesRequest& request) const;
			DeleteMonitorGroupOutcome deleteMonitorGroup(const Model::DeleteMonitorGroupRequest &request)const;
			void deleteMonitorGroupAsync(const Model::DeleteMonitorGroupRequest& request, const DeleteMonitorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMonitorGroupOutcomeCallable deleteMonitorGroupCallable(const Model::DeleteMonitorGroupRequest& request) const;
			DeleteMonitorGroupDynamicRuleOutcome deleteMonitorGroupDynamicRule(const Model::DeleteMonitorGroupDynamicRuleRequest &request)const;
			void deleteMonitorGroupDynamicRuleAsync(const Model::DeleteMonitorGroupDynamicRuleRequest& request, const DeleteMonitorGroupDynamicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMonitorGroupDynamicRuleOutcomeCallable deleteMonitorGroupDynamicRuleCallable(const Model::DeleteMonitorGroupDynamicRuleRequest& request) const;
			DeleteMonitorGroupInstancesOutcome deleteMonitorGroupInstances(const Model::DeleteMonitorGroupInstancesRequest &request)const;
			void deleteMonitorGroupInstancesAsync(const Model::DeleteMonitorGroupInstancesRequest& request, const DeleteMonitorGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMonitorGroupInstancesOutcomeCallable deleteMonitorGroupInstancesCallable(const Model::DeleteMonitorGroupInstancesRequest& request) const;
			DeleteMonitorGroupNotifyPolicyOutcome deleteMonitorGroupNotifyPolicy(const Model::DeleteMonitorGroupNotifyPolicyRequest &request)const;
			void deleteMonitorGroupNotifyPolicyAsync(const Model::DeleteMonitorGroupNotifyPolicyRequest& request, const DeleteMonitorGroupNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMonitorGroupNotifyPolicyOutcomeCallable deleteMonitorGroupNotifyPolicyCallable(const Model::DeleteMonitorGroupNotifyPolicyRequest& request) const;
			DeleteMonitoringAgentProcessOutcome deleteMonitoringAgentProcess(const Model::DeleteMonitoringAgentProcessRequest &request)const;
			void deleteMonitoringAgentProcessAsync(const Model::DeleteMonitoringAgentProcessRequest& request, const DeleteMonitoringAgentProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMonitoringAgentProcessOutcomeCallable deleteMonitoringAgentProcessCallable(const Model::DeleteMonitoringAgentProcessRequest& request) const;
			DeleteSiteMonitorsOutcome deleteSiteMonitors(const Model::DeleteSiteMonitorsRequest &request)const;
			void deleteSiteMonitorsAsync(const Model::DeleteSiteMonitorsRequest& request, const DeleteSiteMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSiteMonitorsOutcomeCallable deleteSiteMonitorsCallable(const Model::DeleteSiteMonitorsRequest& request) const;
			DescribeActiveMetricRuleListOutcome describeActiveMetricRuleList(const Model::DescribeActiveMetricRuleListRequest &request)const;
			void describeActiveMetricRuleListAsync(const Model::DescribeActiveMetricRuleListRequest& request, const DescribeActiveMetricRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActiveMetricRuleListOutcomeCallable describeActiveMetricRuleListCallable(const Model::DescribeActiveMetricRuleListRequest& request) const;
			DescribeAlertHistoryListOutcome describeAlertHistoryList(const Model::DescribeAlertHistoryListRequest &request)const;
			void describeAlertHistoryListAsync(const Model::DescribeAlertHistoryListRequest& request, const DescribeAlertHistoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertHistoryListOutcomeCallable describeAlertHistoryListCallable(const Model::DescribeAlertHistoryListRequest& request) const;
			DescribeAlertLogCountOutcome describeAlertLogCount(const Model::DescribeAlertLogCountRequest &request)const;
			void describeAlertLogCountAsync(const Model::DescribeAlertLogCountRequest& request, const DescribeAlertLogCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertLogCountOutcomeCallable describeAlertLogCountCallable(const Model::DescribeAlertLogCountRequest& request) const;
			DescribeAlertLogHistogramOutcome describeAlertLogHistogram(const Model::DescribeAlertLogHistogramRequest &request)const;
			void describeAlertLogHistogramAsync(const Model::DescribeAlertLogHistogramRequest& request, const DescribeAlertLogHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertLogHistogramOutcomeCallable describeAlertLogHistogramCallable(const Model::DescribeAlertLogHistogramRequest& request) const;
			DescribeAlertLogListOutcome describeAlertLogList(const Model::DescribeAlertLogListRequest &request)const;
			void describeAlertLogListAsync(const Model::DescribeAlertLogListRequest& request, const DescribeAlertLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertLogListOutcomeCallable describeAlertLogListCallable(const Model::DescribeAlertLogListRequest& request) const;
			DescribeAlertingMetricRuleResourcesOutcome describeAlertingMetricRuleResources(const Model::DescribeAlertingMetricRuleResourcesRequest &request)const;
			void describeAlertingMetricRuleResourcesAsync(const Model::DescribeAlertingMetricRuleResourcesRequest& request, const DescribeAlertingMetricRuleResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertingMetricRuleResourcesOutcomeCallable describeAlertingMetricRuleResourcesCallable(const Model::DescribeAlertingMetricRuleResourcesRequest& request) const;
			DescribeContactGroupListOutcome describeContactGroupList(const Model::DescribeContactGroupListRequest &request)const;
			void describeContactGroupListAsync(const Model::DescribeContactGroupListRequest& request, const DescribeContactGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContactGroupListOutcomeCallable describeContactGroupListCallable(const Model::DescribeContactGroupListRequest& request) const;
			DescribeContactListOutcome describeContactList(const Model::DescribeContactListRequest &request)const;
			void describeContactListAsync(const Model::DescribeContactListRequest& request, const DescribeContactListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContactListOutcomeCallable describeContactListCallable(const Model::DescribeContactListRequest& request) const;
			DescribeContactListByContactGroupOutcome describeContactListByContactGroup(const Model::DescribeContactListByContactGroupRequest &request)const;
			void describeContactListByContactGroupAsync(const Model::DescribeContactListByContactGroupRequest& request, const DescribeContactListByContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContactListByContactGroupOutcomeCallable describeContactListByContactGroupCallable(const Model::DescribeContactListByContactGroupRequest& request) const;
			DescribeCustomEventAttributeOutcome describeCustomEventAttribute(const Model::DescribeCustomEventAttributeRequest &request)const;
			void describeCustomEventAttributeAsync(const Model::DescribeCustomEventAttributeRequest& request, const DescribeCustomEventAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomEventAttributeOutcomeCallable describeCustomEventAttributeCallable(const Model::DescribeCustomEventAttributeRequest& request) const;
			DescribeCustomEventCountOutcome describeCustomEventCount(const Model::DescribeCustomEventCountRequest &request)const;
			void describeCustomEventCountAsync(const Model::DescribeCustomEventCountRequest& request, const DescribeCustomEventCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomEventCountOutcomeCallable describeCustomEventCountCallable(const Model::DescribeCustomEventCountRequest& request) const;
			DescribeCustomEventHistogramOutcome describeCustomEventHistogram(const Model::DescribeCustomEventHistogramRequest &request)const;
			void describeCustomEventHistogramAsync(const Model::DescribeCustomEventHistogramRequest& request, const DescribeCustomEventHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomEventHistogramOutcomeCallable describeCustomEventHistogramCallable(const Model::DescribeCustomEventHistogramRequest& request) const;
			DescribeCustomMetricListOutcome describeCustomMetricList(const Model::DescribeCustomMetricListRequest &request)const;
			void describeCustomMetricListAsync(const Model::DescribeCustomMetricListRequest& request, const DescribeCustomMetricListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomMetricListOutcomeCallable describeCustomMetricListCallable(const Model::DescribeCustomMetricListRequest& request) const;
			DescribeDynamicTagRuleListOutcome describeDynamicTagRuleList(const Model::DescribeDynamicTagRuleListRequest &request)const;
			void describeDynamicTagRuleListAsync(const Model::DescribeDynamicTagRuleListRequest& request, const DescribeDynamicTagRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDynamicTagRuleListOutcomeCallable describeDynamicTagRuleListCallable(const Model::DescribeDynamicTagRuleListRequest& request) const;
			DescribeEventRuleAttributeOutcome describeEventRuleAttribute(const Model::DescribeEventRuleAttributeRequest &request)const;
			void describeEventRuleAttributeAsync(const Model::DescribeEventRuleAttributeRequest& request, const DescribeEventRuleAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventRuleAttributeOutcomeCallable describeEventRuleAttributeCallable(const Model::DescribeEventRuleAttributeRequest& request) const;
			DescribeEventRuleListOutcome describeEventRuleList(const Model::DescribeEventRuleListRequest &request)const;
			void describeEventRuleListAsync(const Model::DescribeEventRuleListRequest& request, const DescribeEventRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventRuleListOutcomeCallable describeEventRuleListCallable(const Model::DescribeEventRuleListRequest& request) const;
			DescribeEventRuleTargetListOutcome describeEventRuleTargetList(const Model::DescribeEventRuleTargetListRequest &request)const;
			void describeEventRuleTargetListAsync(const Model::DescribeEventRuleTargetListRequest& request, const DescribeEventRuleTargetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventRuleTargetListOutcomeCallable describeEventRuleTargetListCallable(const Model::DescribeEventRuleTargetListRequest& request) const;
			DescribeExporterOutputListOutcome describeExporterOutputList(const Model::DescribeExporterOutputListRequest &request)const;
			void describeExporterOutputListAsync(const Model::DescribeExporterOutputListRequest& request, const DescribeExporterOutputListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExporterOutputListOutcomeCallable describeExporterOutputListCallable(const Model::DescribeExporterOutputListRequest& request) const;
			DescribeExporterRuleListOutcome describeExporterRuleList(const Model::DescribeExporterRuleListRequest &request)const;
			void describeExporterRuleListAsync(const Model::DescribeExporterRuleListRequest& request, const DescribeExporterRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExporterRuleListOutcomeCallable describeExporterRuleListCallable(const Model::DescribeExporterRuleListRequest& request) const;
			DescribeGroupMonitoringAgentProcessOutcome describeGroupMonitoringAgentProcess(const Model::DescribeGroupMonitoringAgentProcessRequest &request)const;
			void describeGroupMonitoringAgentProcessAsync(const Model::DescribeGroupMonitoringAgentProcessRequest& request, const DescribeGroupMonitoringAgentProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupMonitoringAgentProcessOutcomeCallable describeGroupMonitoringAgentProcessCallable(const Model::DescribeGroupMonitoringAgentProcessRequest& request) const;
			DescribeHostAvailabilityListOutcome describeHostAvailabilityList(const Model::DescribeHostAvailabilityListRequest &request)const;
			void describeHostAvailabilityListAsync(const Model::DescribeHostAvailabilityListRequest& request, const DescribeHostAvailabilityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHostAvailabilityListOutcomeCallable describeHostAvailabilityListCallable(const Model::DescribeHostAvailabilityListRequest& request) const;
			DescribeLogMonitorAttributeOutcome describeLogMonitorAttribute(const Model::DescribeLogMonitorAttributeRequest &request)const;
			void describeLogMonitorAttributeAsync(const Model::DescribeLogMonitorAttributeRequest& request, const DescribeLogMonitorAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogMonitorAttributeOutcomeCallable describeLogMonitorAttributeCallable(const Model::DescribeLogMonitorAttributeRequest& request) const;
			DescribeLogMonitorListOutcome describeLogMonitorList(const Model::DescribeLogMonitorListRequest &request)const;
			void describeLogMonitorListAsync(const Model::DescribeLogMonitorListRequest& request, const DescribeLogMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogMonitorListOutcomeCallable describeLogMonitorListCallable(const Model::DescribeLogMonitorListRequest& request) const;
			DescribeMetricDataOutcome describeMetricData(const Model::DescribeMetricDataRequest &request)const;
			void describeMetricDataAsync(const Model::DescribeMetricDataRequest& request, const DescribeMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetricDataOutcomeCallable describeMetricDataCallable(const Model::DescribeMetricDataRequest& request) const;
			DescribeMetricLastOutcome describeMetricLast(const Model::DescribeMetricLastRequest &request)const;
			void describeMetricLastAsync(const Model::DescribeMetricLastRequest& request, const DescribeMetricLastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetricLastOutcomeCallable describeMetricLastCallable(const Model::DescribeMetricLastRequest& request) const;
			DescribeMetricListOutcome describeMetricList(const Model::DescribeMetricListRequest &request)const;
			void describeMetricListAsync(const Model::DescribeMetricListRequest& request, const DescribeMetricListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetricListOutcomeCallable describeMetricListCallable(const Model::DescribeMetricListRequest& request) const;
			DescribeMetricMetaListOutcome describeMetricMetaList(const Model::DescribeMetricMetaListRequest &request)const;
			void describeMetricMetaListAsync(const Model::DescribeMetricMetaListRequest& request, const DescribeMetricMetaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetricMetaListOutcomeCallable describeMetricMetaListCallable(const Model::DescribeMetricMetaListRequest& request) const;
			DescribeMetricRuleCountOutcome describeMetricRuleCount(const Model::DescribeMetricRuleCountRequest &request)const;
			void describeMetricRuleCountAsync(const Model::DescribeMetricRuleCountRequest& request, const DescribeMetricRuleCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetricRuleCountOutcomeCallable describeMetricRuleCountCallable(const Model::DescribeMetricRuleCountRequest& request) const;
			DescribeMetricRuleListOutcome describeMetricRuleList(const Model::DescribeMetricRuleListRequest &request)const;
			void describeMetricRuleListAsync(const Model::DescribeMetricRuleListRequest& request, const DescribeMetricRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetricRuleListOutcomeCallable describeMetricRuleListCallable(const Model::DescribeMetricRuleListRequest& request) const;
			DescribeMetricRuleTargetsOutcome describeMetricRuleTargets(const Model::DescribeMetricRuleTargetsRequest &request)const;
			void describeMetricRuleTargetsAsync(const Model::DescribeMetricRuleTargetsRequest& request, const DescribeMetricRuleTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetricRuleTargetsOutcomeCallable describeMetricRuleTargetsCallable(const Model::DescribeMetricRuleTargetsRequest& request) const;
			DescribeMetricRuleTemplateAttributeOutcome describeMetricRuleTemplateAttribute(const Model::DescribeMetricRuleTemplateAttributeRequest &request)const;
			void describeMetricRuleTemplateAttributeAsync(const Model::DescribeMetricRuleTemplateAttributeRequest& request, const DescribeMetricRuleTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetricRuleTemplateAttributeOutcomeCallable describeMetricRuleTemplateAttributeCallable(const Model::DescribeMetricRuleTemplateAttributeRequest& request) const;
			DescribeMetricRuleTemplateListOutcome describeMetricRuleTemplateList(const Model::DescribeMetricRuleTemplateListRequest &request)const;
			void describeMetricRuleTemplateListAsync(const Model::DescribeMetricRuleTemplateListRequest& request, const DescribeMetricRuleTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetricRuleTemplateListOutcomeCallable describeMetricRuleTemplateListCallable(const Model::DescribeMetricRuleTemplateListRequest& request) const;
			DescribeMetricTopOutcome describeMetricTop(const Model::DescribeMetricTopRequest &request)const;
			void describeMetricTopAsync(const Model::DescribeMetricTopRequest& request, const DescribeMetricTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetricTopOutcomeCallable describeMetricTopCallable(const Model::DescribeMetricTopRequest& request) const;
			DescribeMonitorGroupCategoriesOutcome describeMonitorGroupCategories(const Model::DescribeMonitorGroupCategoriesRequest &request)const;
			void describeMonitorGroupCategoriesAsync(const Model::DescribeMonitorGroupCategoriesRequest& request, const DescribeMonitorGroupCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitorGroupCategoriesOutcomeCallable describeMonitorGroupCategoriesCallable(const Model::DescribeMonitorGroupCategoriesRequest& request) const;
			DescribeMonitorGroupDynamicRulesOutcome describeMonitorGroupDynamicRules(const Model::DescribeMonitorGroupDynamicRulesRequest &request)const;
			void describeMonitorGroupDynamicRulesAsync(const Model::DescribeMonitorGroupDynamicRulesRequest& request, const DescribeMonitorGroupDynamicRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitorGroupDynamicRulesOutcomeCallable describeMonitorGroupDynamicRulesCallable(const Model::DescribeMonitorGroupDynamicRulesRequest& request) const;
			DescribeMonitorGroupInstanceAttributeOutcome describeMonitorGroupInstanceAttribute(const Model::DescribeMonitorGroupInstanceAttributeRequest &request)const;
			void describeMonitorGroupInstanceAttributeAsync(const Model::DescribeMonitorGroupInstanceAttributeRequest& request, const DescribeMonitorGroupInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitorGroupInstanceAttributeOutcomeCallable describeMonitorGroupInstanceAttributeCallable(const Model::DescribeMonitorGroupInstanceAttributeRequest& request) const;
			DescribeMonitorGroupInstancesOutcome describeMonitorGroupInstances(const Model::DescribeMonitorGroupInstancesRequest &request)const;
			void describeMonitorGroupInstancesAsync(const Model::DescribeMonitorGroupInstancesRequest& request, const DescribeMonitorGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitorGroupInstancesOutcomeCallable describeMonitorGroupInstancesCallable(const Model::DescribeMonitorGroupInstancesRequest& request) const;
			DescribeMonitorGroupNotifyPolicyListOutcome describeMonitorGroupNotifyPolicyList(const Model::DescribeMonitorGroupNotifyPolicyListRequest &request)const;
			void describeMonitorGroupNotifyPolicyListAsync(const Model::DescribeMonitorGroupNotifyPolicyListRequest& request, const DescribeMonitorGroupNotifyPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitorGroupNotifyPolicyListOutcomeCallable describeMonitorGroupNotifyPolicyListCallable(const Model::DescribeMonitorGroupNotifyPolicyListRequest& request) const;
			DescribeMonitorGroupsOutcome describeMonitorGroups(const Model::DescribeMonitorGroupsRequest &request)const;
			void describeMonitorGroupsAsync(const Model::DescribeMonitorGroupsRequest& request, const DescribeMonitorGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitorGroupsOutcomeCallable describeMonitorGroupsCallable(const Model::DescribeMonitorGroupsRequest& request) const;
			DescribeMonitorResourceQuotaAttributeOutcome describeMonitorResourceQuotaAttribute(const Model::DescribeMonitorResourceQuotaAttributeRequest &request)const;
			void describeMonitorResourceQuotaAttributeAsync(const Model::DescribeMonitorResourceQuotaAttributeRequest& request, const DescribeMonitorResourceQuotaAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitorResourceQuotaAttributeOutcomeCallable describeMonitorResourceQuotaAttributeCallable(const Model::DescribeMonitorResourceQuotaAttributeRequest& request) const;
			DescribeMonitoringAgentAccessKeyOutcome describeMonitoringAgentAccessKey(const Model::DescribeMonitoringAgentAccessKeyRequest &request)const;
			void describeMonitoringAgentAccessKeyAsync(const Model::DescribeMonitoringAgentAccessKeyRequest& request, const DescribeMonitoringAgentAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitoringAgentAccessKeyOutcomeCallable describeMonitoringAgentAccessKeyCallable(const Model::DescribeMonitoringAgentAccessKeyRequest& request) const;
			DescribeMonitoringAgentConfigOutcome describeMonitoringAgentConfig(const Model::DescribeMonitoringAgentConfigRequest &request)const;
			void describeMonitoringAgentConfigAsync(const Model::DescribeMonitoringAgentConfigRequest& request, const DescribeMonitoringAgentConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitoringAgentConfigOutcomeCallable describeMonitoringAgentConfigCallable(const Model::DescribeMonitoringAgentConfigRequest& request) const;
			DescribeMonitoringAgentHostsOutcome describeMonitoringAgentHosts(const Model::DescribeMonitoringAgentHostsRequest &request)const;
			void describeMonitoringAgentHostsAsync(const Model::DescribeMonitoringAgentHostsRequest& request, const DescribeMonitoringAgentHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitoringAgentHostsOutcomeCallable describeMonitoringAgentHostsCallable(const Model::DescribeMonitoringAgentHostsRequest& request) const;
			DescribeMonitoringAgentProcessesOutcome describeMonitoringAgentProcesses(const Model::DescribeMonitoringAgentProcessesRequest &request)const;
			void describeMonitoringAgentProcessesAsync(const Model::DescribeMonitoringAgentProcessesRequest& request, const DescribeMonitoringAgentProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitoringAgentProcessesOutcomeCallable describeMonitoringAgentProcessesCallable(const Model::DescribeMonitoringAgentProcessesRequest& request) const;
			DescribeMonitoringAgentStatusesOutcome describeMonitoringAgentStatuses(const Model::DescribeMonitoringAgentStatusesRequest &request)const;
			void describeMonitoringAgentStatusesAsync(const Model::DescribeMonitoringAgentStatusesRequest& request, const DescribeMonitoringAgentStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitoringAgentStatusesOutcomeCallable describeMonitoringAgentStatusesCallable(const Model::DescribeMonitoringAgentStatusesRequest& request) const;
			DescribeMonitoringConfigOutcome describeMonitoringConfig(const Model::DescribeMonitoringConfigRequest &request)const;
			void describeMonitoringConfigAsync(const Model::DescribeMonitoringConfigRequest& request, const DescribeMonitoringConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitoringConfigOutcomeCallable describeMonitoringConfigCallable(const Model::DescribeMonitoringConfigRequest& request) const;
			DescribeProductResourceTagKeyListOutcome describeProductResourceTagKeyList(const Model::DescribeProductResourceTagKeyListRequest &request)const;
			void describeProductResourceTagKeyListAsync(const Model::DescribeProductResourceTagKeyListRequest& request, const DescribeProductResourceTagKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProductResourceTagKeyListOutcomeCallable describeProductResourceTagKeyListCallable(const Model::DescribeProductResourceTagKeyListRequest& request) const;
			DescribeProductsOfActiveMetricRuleOutcome describeProductsOfActiveMetricRule(const Model::DescribeProductsOfActiveMetricRuleRequest &request)const;
			void describeProductsOfActiveMetricRuleAsync(const Model::DescribeProductsOfActiveMetricRuleRequest& request, const DescribeProductsOfActiveMetricRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProductsOfActiveMetricRuleOutcomeCallable describeProductsOfActiveMetricRuleCallable(const Model::DescribeProductsOfActiveMetricRuleRequest& request) const;
			DescribeProjectMetaOutcome describeProjectMeta(const Model::DescribeProjectMetaRequest &request)const;
			void describeProjectMetaAsync(const Model::DescribeProjectMetaRequest& request, const DescribeProjectMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProjectMetaOutcomeCallable describeProjectMetaCallable(const Model::DescribeProjectMetaRequest& request) const;
			DescribeSiteMonitorAttributeOutcome describeSiteMonitorAttribute(const Model::DescribeSiteMonitorAttributeRequest &request)const;
			void describeSiteMonitorAttributeAsync(const Model::DescribeSiteMonitorAttributeRequest& request, const DescribeSiteMonitorAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSiteMonitorAttributeOutcomeCallable describeSiteMonitorAttributeCallable(const Model::DescribeSiteMonitorAttributeRequest& request) const;
			DescribeSiteMonitorDataOutcome describeSiteMonitorData(const Model::DescribeSiteMonitorDataRequest &request)const;
			void describeSiteMonitorDataAsync(const Model::DescribeSiteMonitorDataRequest& request, const DescribeSiteMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSiteMonitorDataOutcomeCallable describeSiteMonitorDataCallable(const Model::DescribeSiteMonitorDataRequest& request) const;
			DescribeSiteMonitorISPCityListOutcome describeSiteMonitorISPCityList(const Model::DescribeSiteMonitorISPCityListRequest &request)const;
			void describeSiteMonitorISPCityListAsync(const Model::DescribeSiteMonitorISPCityListRequest& request, const DescribeSiteMonitorISPCityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSiteMonitorISPCityListOutcomeCallable describeSiteMonitorISPCityListCallable(const Model::DescribeSiteMonitorISPCityListRequest& request) const;
			DescribeSiteMonitorListOutcome describeSiteMonitorList(const Model::DescribeSiteMonitorListRequest &request)const;
			void describeSiteMonitorListAsync(const Model::DescribeSiteMonitorListRequest& request, const DescribeSiteMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSiteMonitorListOutcomeCallable describeSiteMonitorListCallable(const Model::DescribeSiteMonitorListRequest& request) const;
			DescribeSiteMonitorLogOutcome describeSiteMonitorLog(const Model::DescribeSiteMonitorLogRequest &request)const;
			void describeSiteMonitorLogAsync(const Model::DescribeSiteMonitorLogRequest& request, const DescribeSiteMonitorLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSiteMonitorLogOutcomeCallable describeSiteMonitorLogCallable(const Model::DescribeSiteMonitorLogRequest& request) const;
			DescribeSiteMonitorQuotaOutcome describeSiteMonitorQuota(const Model::DescribeSiteMonitorQuotaRequest &request)const;
			void describeSiteMonitorQuotaAsync(const Model::DescribeSiteMonitorQuotaRequest& request, const DescribeSiteMonitorQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSiteMonitorQuotaOutcomeCallable describeSiteMonitorQuotaCallable(const Model::DescribeSiteMonitorQuotaRequest& request) const;
			DescribeSiteMonitorStatisticsOutcome describeSiteMonitorStatistics(const Model::DescribeSiteMonitorStatisticsRequest &request)const;
			void describeSiteMonitorStatisticsAsync(const Model::DescribeSiteMonitorStatisticsRequest& request, const DescribeSiteMonitorStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSiteMonitorStatisticsOutcomeCallable describeSiteMonitorStatisticsCallable(const Model::DescribeSiteMonitorStatisticsRequest& request) const;
			DescribeSystemEventAttributeOutcome describeSystemEventAttribute(const Model::DescribeSystemEventAttributeRequest &request)const;
			void describeSystemEventAttributeAsync(const Model::DescribeSystemEventAttributeRequest& request, const DescribeSystemEventAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSystemEventAttributeOutcomeCallable describeSystemEventAttributeCallable(const Model::DescribeSystemEventAttributeRequest& request) const;
			DescribeSystemEventCountOutcome describeSystemEventCount(const Model::DescribeSystemEventCountRequest &request)const;
			void describeSystemEventCountAsync(const Model::DescribeSystemEventCountRequest& request, const DescribeSystemEventCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSystemEventCountOutcomeCallable describeSystemEventCountCallable(const Model::DescribeSystemEventCountRequest& request) const;
			DescribeSystemEventHistogramOutcome describeSystemEventHistogram(const Model::DescribeSystemEventHistogramRequest &request)const;
			void describeSystemEventHistogramAsync(const Model::DescribeSystemEventHistogramRequest& request, const DescribeSystemEventHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSystemEventHistogramOutcomeCallable describeSystemEventHistogramCallable(const Model::DescribeSystemEventHistogramRequest& request) const;
			DescribeSystemEventMetaListOutcome describeSystemEventMetaList(const Model::DescribeSystemEventMetaListRequest &request)const;
			void describeSystemEventMetaListAsync(const Model::DescribeSystemEventMetaListRequest& request, const DescribeSystemEventMetaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSystemEventMetaListOutcomeCallable describeSystemEventMetaListCallable(const Model::DescribeSystemEventMetaListRequest& request) const;
			DescribeTagKeyListOutcome describeTagKeyList(const Model::DescribeTagKeyListRequest &request)const;
			void describeTagKeyListAsync(const Model::DescribeTagKeyListRequest& request, const DescribeTagKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagKeyListOutcomeCallable describeTagKeyListCallable(const Model::DescribeTagKeyListRequest& request) const;
			DescribeTagValueListOutcome describeTagValueList(const Model::DescribeTagValueListRequest &request)const;
			void describeTagValueListAsync(const Model::DescribeTagValueListRequest& request, const DescribeTagValueListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagValueListOutcomeCallable describeTagValueListCallable(const Model::DescribeTagValueListRequest& request) const;
			DescribeUnhealthyHostAvailabilityOutcome describeUnhealthyHostAvailability(const Model::DescribeUnhealthyHostAvailabilityRequest &request)const;
			void describeUnhealthyHostAvailabilityAsync(const Model::DescribeUnhealthyHostAvailabilityRequest& request, const DescribeUnhealthyHostAvailabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUnhealthyHostAvailabilityOutcomeCallable describeUnhealthyHostAvailabilityCallable(const Model::DescribeUnhealthyHostAvailabilityRequest& request) const;
			DisableActiveMetricRuleOutcome disableActiveMetricRule(const Model::DisableActiveMetricRuleRequest &request)const;
			void disableActiveMetricRuleAsync(const Model::DisableActiveMetricRuleRequest& request, const DisableActiveMetricRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableActiveMetricRuleOutcomeCallable disableActiveMetricRuleCallable(const Model::DisableActiveMetricRuleRequest& request) const;
			DisableEventRulesOutcome disableEventRules(const Model::DisableEventRulesRequest &request)const;
			void disableEventRulesAsync(const Model::DisableEventRulesRequest& request, const DisableEventRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableEventRulesOutcomeCallable disableEventRulesCallable(const Model::DisableEventRulesRequest& request) const;
			DisableHostAvailabilityOutcome disableHostAvailability(const Model::DisableHostAvailabilityRequest &request)const;
			void disableHostAvailabilityAsync(const Model::DisableHostAvailabilityRequest& request, const DisableHostAvailabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableHostAvailabilityOutcomeCallable disableHostAvailabilityCallable(const Model::DisableHostAvailabilityRequest& request) const;
			DisableMetricRulesOutcome disableMetricRules(const Model::DisableMetricRulesRequest &request)const;
			void disableMetricRulesAsync(const Model::DisableMetricRulesRequest& request, const DisableMetricRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableMetricRulesOutcomeCallable disableMetricRulesCallable(const Model::DisableMetricRulesRequest& request) const;
			DisableSiteMonitorsOutcome disableSiteMonitors(const Model::DisableSiteMonitorsRequest &request)const;
			void disableSiteMonitorsAsync(const Model::DisableSiteMonitorsRequest& request, const DisableSiteMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableSiteMonitorsOutcomeCallable disableSiteMonitorsCallable(const Model::DisableSiteMonitorsRequest& request) const;
			EnableActiveMetricRuleOutcome enableActiveMetricRule(const Model::EnableActiveMetricRuleRequest &request)const;
			void enableActiveMetricRuleAsync(const Model::EnableActiveMetricRuleRequest& request, const EnableActiveMetricRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableActiveMetricRuleOutcomeCallable enableActiveMetricRuleCallable(const Model::EnableActiveMetricRuleRequest& request) const;
			EnableEventRulesOutcome enableEventRules(const Model::EnableEventRulesRequest &request)const;
			void enableEventRulesAsync(const Model::EnableEventRulesRequest& request, const EnableEventRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableEventRulesOutcomeCallable enableEventRulesCallable(const Model::EnableEventRulesRequest& request) const;
			EnableHostAvailabilityOutcome enableHostAvailability(const Model::EnableHostAvailabilityRequest &request)const;
			void enableHostAvailabilityAsync(const Model::EnableHostAvailabilityRequest& request, const EnableHostAvailabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableHostAvailabilityOutcomeCallable enableHostAvailabilityCallable(const Model::EnableHostAvailabilityRequest& request) const;
			EnableMetricRulesOutcome enableMetricRules(const Model::EnableMetricRulesRequest &request)const;
			void enableMetricRulesAsync(const Model::EnableMetricRulesRequest& request, const EnableMetricRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableMetricRulesOutcomeCallable enableMetricRulesCallable(const Model::EnableMetricRulesRequest& request) const;
			EnableSiteMonitorsOutcome enableSiteMonitors(const Model::EnableSiteMonitorsRequest &request)const;
			void enableSiteMonitorsAsync(const Model::EnableSiteMonitorsRequest& request, const EnableSiteMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableSiteMonitorsOutcomeCallable enableSiteMonitorsCallable(const Model::EnableSiteMonitorsRequest& request) const;
			InstallMonitoringAgentOutcome installMonitoringAgent(const Model::InstallMonitoringAgentRequest &request)const;
			void installMonitoringAgentAsync(const Model::InstallMonitoringAgentRequest& request, const InstallMonitoringAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallMonitoringAgentOutcomeCallable installMonitoringAgentCallable(const Model::InstallMonitoringAgentRequest& request) const;
			ModifyGroupMonitoringAgentProcessOutcome modifyGroupMonitoringAgentProcess(const Model::ModifyGroupMonitoringAgentProcessRequest &request)const;
			void modifyGroupMonitoringAgentProcessAsync(const Model::ModifyGroupMonitoringAgentProcessRequest& request, const ModifyGroupMonitoringAgentProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGroupMonitoringAgentProcessOutcomeCallable modifyGroupMonitoringAgentProcessCallable(const Model::ModifyGroupMonitoringAgentProcessRequest& request) const;
			ModifyHostAvailabilityOutcome modifyHostAvailability(const Model::ModifyHostAvailabilityRequest &request)const;
			void modifyHostAvailabilityAsync(const Model::ModifyHostAvailabilityRequest& request, const ModifyHostAvailabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHostAvailabilityOutcomeCallable modifyHostAvailabilityCallable(const Model::ModifyHostAvailabilityRequest& request) const;
			ModifyHostInfoOutcome modifyHostInfo(const Model::ModifyHostInfoRequest &request)const;
			void modifyHostInfoAsync(const Model::ModifyHostInfoRequest& request, const ModifyHostInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHostInfoOutcomeCallable modifyHostInfoCallable(const Model::ModifyHostInfoRequest& request) const;
			ModifyMetricRuleTemplateOutcome modifyMetricRuleTemplate(const Model::ModifyMetricRuleTemplateRequest &request)const;
			void modifyMetricRuleTemplateAsync(const Model::ModifyMetricRuleTemplateRequest& request, const ModifyMetricRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMetricRuleTemplateOutcomeCallable modifyMetricRuleTemplateCallable(const Model::ModifyMetricRuleTemplateRequest& request) const;
			ModifyMonitorGroupOutcome modifyMonitorGroup(const Model::ModifyMonitorGroupRequest &request)const;
			void modifyMonitorGroupAsync(const Model::ModifyMonitorGroupRequest& request, const ModifyMonitorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMonitorGroupOutcomeCallable modifyMonitorGroupCallable(const Model::ModifyMonitorGroupRequest& request) const;
			ModifyMonitorGroupInstancesOutcome modifyMonitorGroupInstances(const Model::ModifyMonitorGroupInstancesRequest &request)const;
			void modifyMonitorGroupInstancesAsync(const Model::ModifyMonitorGroupInstancesRequest& request, const ModifyMonitorGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMonitorGroupInstancesOutcomeCallable modifyMonitorGroupInstancesCallable(const Model::ModifyMonitorGroupInstancesRequest& request) const;
			ModifySiteMonitorOutcome modifySiteMonitor(const Model::ModifySiteMonitorRequest &request)const;
			void modifySiteMonitorAsync(const Model::ModifySiteMonitorRequest& request, const ModifySiteMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySiteMonitorOutcomeCallable modifySiteMonitorCallable(const Model::ModifySiteMonitorRequest& request) const;
			OpenCmsServiceOutcome openCmsService(const Model::OpenCmsServiceRequest &request)const;
			void openCmsServiceAsync(const Model::OpenCmsServiceRequest& request, const OpenCmsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenCmsServiceOutcomeCallable openCmsServiceCallable(const Model::OpenCmsServiceRequest& request) const;
			PutContactOutcome putContact(const Model::PutContactRequest &request)const;
			void putContactAsync(const Model::PutContactRequest& request, const PutContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutContactOutcomeCallable putContactCallable(const Model::PutContactRequest& request) const;
			PutContactGroupOutcome putContactGroup(const Model::PutContactGroupRequest &request)const;
			void putContactGroupAsync(const Model::PutContactGroupRequest& request, const PutContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutContactGroupOutcomeCallable putContactGroupCallable(const Model::PutContactGroupRequest& request) const;
			PutCustomEventOutcome putCustomEvent(const Model::PutCustomEventRequest &request)const;
			void putCustomEventAsync(const Model::PutCustomEventRequest& request, const PutCustomEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutCustomEventOutcomeCallable putCustomEventCallable(const Model::PutCustomEventRequest& request) const;
			PutCustomEventRuleOutcome putCustomEventRule(const Model::PutCustomEventRuleRequest &request)const;
			void putCustomEventRuleAsync(const Model::PutCustomEventRuleRequest& request, const PutCustomEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutCustomEventRuleOutcomeCallable putCustomEventRuleCallable(const Model::PutCustomEventRuleRequest& request) const;
			PutCustomMetricOutcome putCustomMetric(const Model::PutCustomMetricRequest &request)const;
			void putCustomMetricAsync(const Model::PutCustomMetricRequest& request, const PutCustomMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutCustomMetricOutcomeCallable putCustomMetricCallable(const Model::PutCustomMetricRequest& request) const;
			PutCustomMetricRuleOutcome putCustomMetricRule(const Model::PutCustomMetricRuleRequest &request)const;
			void putCustomMetricRuleAsync(const Model::PutCustomMetricRuleRequest& request, const PutCustomMetricRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutCustomMetricRuleOutcomeCallable putCustomMetricRuleCallable(const Model::PutCustomMetricRuleRequest& request) const;
			PutEventRuleOutcome putEventRule(const Model::PutEventRuleRequest &request)const;
			void putEventRuleAsync(const Model::PutEventRuleRequest& request, const PutEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutEventRuleOutcomeCallable putEventRuleCallable(const Model::PutEventRuleRequest& request) const;
			PutEventRuleTargetsOutcome putEventRuleTargets(const Model::PutEventRuleTargetsRequest &request)const;
			void putEventRuleTargetsAsync(const Model::PutEventRuleTargetsRequest& request, const PutEventRuleTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutEventRuleTargetsOutcomeCallable putEventRuleTargetsCallable(const Model::PutEventRuleTargetsRequest& request) const;
			PutExporterOutputOutcome putExporterOutput(const Model::PutExporterOutputRequest &request)const;
			void putExporterOutputAsync(const Model::PutExporterOutputRequest& request, const PutExporterOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutExporterOutputOutcomeCallable putExporterOutputCallable(const Model::PutExporterOutputRequest& request) const;
			PutExporterRuleOutcome putExporterRule(const Model::PutExporterRuleRequest &request)const;
			void putExporterRuleAsync(const Model::PutExporterRuleRequest& request, const PutExporterRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutExporterRuleOutcomeCallable putExporterRuleCallable(const Model::PutExporterRuleRequest& request) const;
			PutGroupMetricRuleOutcome putGroupMetricRule(const Model::PutGroupMetricRuleRequest &request)const;
			void putGroupMetricRuleAsync(const Model::PutGroupMetricRuleRequest& request, const PutGroupMetricRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutGroupMetricRuleOutcomeCallable putGroupMetricRuleCallable(const Model::PutGroupMetricRuleRequest& request) const;
			PutHybridMonitorMetricDataOutcome putHybridMonitorMetricData(const Model::PutHybridMonitorMetricDataRequest &request)const;
			void putHybridMonitorMetricDataAsync(const Model::PutHybridMonitorMetricDataRequest& request, const PutHybridMonitorMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutHybridMonitorMetricDataOutcomeCallable putHybridMonitorMetricDataCallable(const Model::PutHybridMonitorMetricDataRequest& request) const;
			PutLogMonitorOutcome putLogMonitor(const Model::PutLogMonitorRequest &request)const;
			void putLogMonitorAsync(const Model::PutLogMonitorRequest& request, const PutLogMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutLogMonitorOutcomeCallable putLogMonitorCallable(const Model::PutLogMonitorRequest& request) const;
			PutMetricRuleTargetsOutcome putMetricRuleTargets(const Model::PutMetricRuleTargetsRequest &request)const;
			void putMetricRuleTargetsAsync(const Model::PutMetricRuleTargetsRequest& request, const PutMetricRuleTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutMetricRuleTargetsOutcomeCallable putMetricRuleTargetsCallable(const Model::PutMetricRuleTargetsRequest& request) const;
			PutMonitorGroupDynamicRuleOutcome putMonitorGroupDynamicRule(const Model::PutMonitorGroupDynamicRuleRequest &request)const;
			void putMonitorGroupDynamicRuleAsync(const Model::PutMonitorGroupDynamicRuleRequest& request, const PutMonitorGroupDynamicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutMonitorGroupDynamicRuleOutcomeCallable putMonitorGroupDynamicRuleCallable(const Model::PutMonitorGroupDynamicRuleRequest& request) const;
			PutMonitoringConfigOutcome putMonitoringConfig(const Model::PutMonitoringConfigRequest &request)const;
			void putMonitoringConfigAsync(const Model::PutMonitoringConfigRequest& request, const PutMonitoringConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutMonitoringConfigOutcomeCallable putMonitoringConfigCallable(const Model::PutMonitoringConfigRequest& request) const;
			PutResourceMetricRuleOutcome putResourceMetricRule(const Model::PutResourceMetricRuleRequest &request)const;
			void putResourceMetricRuleAsync(const Model::PutResourceMetricRuleRequest& request, const PutResourceMetricRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutResourceMetricRuleOutcomeCallable putResourceMetricRuleCallable(const Model::PutResourceMetricRuleRequest& request) const;
			PutResourceMetricRulesOutcome putResourceMetricRules(const Model::PutResourceMetricRulesRequest &request)const;
			void putResourceMetricRulesAsync(const Model::PutResourceMetricRulesRequest& request, const PutResourceMetricRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutResourceMetricRulesOutcomeCallable putResourceMetricRulesCallable(const Model::PutResourceMetricRulesRequest& request) const;
			RemoveTagsOutcome removeTags(const Model::RemoveTagsRequest &request)const;
			void removeTagsAsync(const Model::RemoveTagsRequest& request, const RemoveTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveTagsOutcomeCallable removeTagsCallable(const Model::RemoveTagsRequest& request) const;
			SendDryRunSystemEventOutcome sendDryRunSystemEvent(const Model::SendDryRunSystemEventRequest &request)const;
			void sendDryRunSystemEventAsync(const Model::SendDryRunSystemEventRequest& request, const SendDryRunSystemEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendDryRunSystemEventOutcomeCallable sendDryRunSystemEventCallable(const Model::SendDryRunSystemEventRequest& request) const;
			UninstallMonitoringAgentOutcome uninstallMonitoringAgent(const Model::UninstallMonitoringAgentRequest &request)const;
			void uninstallMonitoringAgentAsync(const Model::UninstallMonitoringAgentRequest& request, const UninstallMonitoringAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UninstallMonitoringAgentOutcomeCallable uninstallMonitoringAgentCallable(const Model::UninstallMonitoringAgentRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CMS_CMSCLIENT_H_
