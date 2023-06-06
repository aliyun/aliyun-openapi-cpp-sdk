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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBESUSPEVENTSRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBESUSPEVENTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeSuspEventsResult : public ServiceResult
			{
			public:
				struct WarningSummary
				{
					struct TacticItem
					{
						std::string tacticId;
						std::string tacticDisplayName;
					};
					struct QuaraFile
					{
						std::string type;
						std::string value;
						std::string infoType;
						std::string valueDisplay;
						std::string nameDisplay;
						std::string name;
					};
					struct EventNote
					{
						long noteId;
						std::string note;
						std::string noteTime;
					};
					std::string k8sNodeId;
					bool containHwMode;
					std::string k8sNodeName;
					bool hasTraceInfo;
					std::string intranetIp;
					std::string imageUuid;
					std::string k8sClusterId;
					std::string name;
					std::string k8sNamespace;
					std::string desc;
					std::string internetIp;
					std::string containerId;
					std::string alarmEventType;
					std::string alarmEventNameDisplay;
					std::string uniqueInfo;
					bool canCancelFault;
					std::string maliciousRuleStatus;
					std::string instanceId;
					std::string saleVersion;
					std::string containerImageId;
					std::string dataSource;
					bool displaySandboxResult;
					std::string occurrenceTime;
					std::string instanceName;
					long operateTime;
					bool canBeDealOnLine;
					std::vector<WarningSummary::QuaraFile> details;
					std::string k8sClusterName;
					std::string containerImageName;
					std::string alarmUniqueInfo;
					long occurrenceTimeStamp;
					std::string level;
					long id;
					std::vector<WarningSummary::TacticItem> tacticItems;
					bool advanced;
					std::string operateErrorCode;
					std::string alarmEventName;
					std::string securityEventIds;
					int eventStatus;
					std::string eventSubType;
					std::string appName;
					long lastTimeStamp;
					std::string alarmEventTypeDisplay;
					std::string clusterId;
					std::string stages;
					std::string markMisRules;
					std::vector<WarningSummary::EventNote> eventNotes;
					std::string k8sPodName;
					std::string operateMsg;
					std::string uuid;
					bool autoBreaking;
					std::string lastTime;
				};


				DescribeSuspEventsResult();
				explicit DescribeSuspEventsResult(const std::string &payload);
				~DescribeSuspEventsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				int getCount()const;
				std::vector<WarningSummary> getSuspEvents()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				int count_;
				std::vector<WarningSummary> suspEvents_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBESUSPEVENTSRESULT_H_