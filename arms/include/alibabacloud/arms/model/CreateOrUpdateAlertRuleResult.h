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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEALERTRULERESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEALERTRULERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT CreateOrUpdateAlertRuleResult : public ServiceResult
			{
			public:
				struct AlertRule
				{
					struct AlertRuleContent
					{
						struct AlertRuleItemsItem
						{
							std::string metricKey;
							std::string value;
							std::string _operator;
							std::string aggregate;
							float n;
						};
						std::string condition;
						std::vector<AlertRuleItemsItem> alertRuleItems;
					};
					struct Filters
					{
						struct DimFiltersItem
						{
							std::string filterOpt;
							std::vector<std::string> filterValues;
							std::string filterKey;
						};
						struct CustomSLSFiltersItem
						{
							std::string opt;
							std::string t;
							std::string value;
							bool show;
							std::string key;
						};
						std::vector<CustomSLSFiltersItem> customSLSFilters;
						std::vector<std::string> customSLSWheres;
						std::vector<std::string> customSLSGroupByDimensions;
						std::vector<DimFiltersItem> dimFilters;
					};
					struct LabelsItem
					{
						std::string value;
						std::string name;
					};
					struct AnnotationsItem
					{
						std::string value;
						std::string name;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					long createdTime;
					std::string message;
					std::string alertCheckType;
					std::string notifyStrategy;
					std::vector<std::string> pids;
					std::string alertType;
					Filters filters;
					long alertGroup;
					std::vector<AnnotationsItem> annotations;
					std::string alertStatus;
					std::string metricsType;
					std::vector<Tag> tags;
					std::string alertName;
					std::string clusterId;
					std::string promQL;
					AlertRuleContent alertRuleContent;
					std::vector<LabelsItem> labels;
					std::string duration;
					float alertId;
					std::string notifyMode;
					std::string extend;
					std::string userId;
					bool autoAddNewApplication;
					std::string level;
					std::string regionId;
					long updatedTime;
				};


				CreateOrUpdateAlertRuleResult();
				explicit CreateOrUpdateAlertRuleResult(const std::string &payload);
				~CreateOrUpdateAlertRuleResult();
				AlertRule getAlertRule()const;

			protected:
				void parse(const std::string &payload);
			private:
				AlertRule alertRule_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEALERTRULERESULT_H_