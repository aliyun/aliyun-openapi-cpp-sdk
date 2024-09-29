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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDIJOBRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDIJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetDIJobResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ResourceSettings
					{
						struct OfflineResourceSettings
						{
							std::string resourceGroupIdentifier;
						};
						struct RealtimeResourceSettings
						{
							std::string resourceGroupIdentifier;
						};
						RealtimeResourceSettings realtimeResourceSettings;
						float requestedCu;
						OfflineResourceSettings offlineResourceSettings;
					};
					struct JobSettings
					{
						struct CycleScheduleSettings
						{
							std::string cycleMigrationType;
							std::string scheduleParameters;
						};
						struct ColumnDataTypeSetting
						{
							std::string destinationDataType;
							std::string sourceDataType;
						};
						struct DdlHandlingSetting
						{
							std::string action;
							std::string type;
						};
						struct RuntimeSetting
						{
							std::string value;
							std::string name;
						};
						std::vector<DdlHandlingSetting> ddlHandlingSettings;
						std::vector<ColumnDataTypeSetting> columnDataTypeSettings;
						std::vector<RuntimeSetting> runtimeSettings;
						CycleScheduleSettings cycleScheduleSettings;
						std::string channelSettings;
					};
					struct SourceDataSourceSetting
					{
						std::string dataSourceName;
						std::string dataSourceProperties;
					};
					struct DestinationDataSourceSetting
					{
						std::string dataSourceName;
						std::string dataSourceProperties;
					};
					struct TransformationRule
					{
						std::string ruleActionType;
						std::string ruleExpression;
						std::string ruleTargetType;
						std::string ruleName;
					};
					struct TableMapping
					{
						struct SourceObjectSelectionRule
						{
							std::string objectType;
							std::string expression;
						};
						struct TransformationRule2
						{
							std::string ruleActionType;
							std::string ruleTargetType;
							std::string ruleName;
						};
						std::vector<TableMapping::SourceObjectSelectionRule> sourceObjectSelectionRules;
						std::vector<TableMapping::TransformationRule2> transformationRules1;
					};
					std::string updatedUid;
					std::string runStats;
					JobSettings jobSettings;
					std::string description;
					long createdTime;
					long projectId;
					std::string jobName;
					std::vector<SourceDataSourceSetting> sourceDataSourceSettings;
					std::string migrationType;
					std::string destinationDataSourceType;
					std::string jobStatus;
					long dIJobId;
					std::vector<TableMapping> tableMappings;
					std::string startedUid;
					ResourceSettings resourceSettings;
					std::vector<TransformationRule> transformationRules;
					std::string sourceDataSourceType;
					long startedTime;
					std::vector<DestinationDataSourceSetting> destinationDataSourceSettings;
					long updatedTime;
					std::string errorMessage;
					std::string createdUid;
				};


				GetDIJobResult();
				explicit GetDIJobResult(const std::string &payload);
				~GetDIJobResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDIJOBRESULT_H_