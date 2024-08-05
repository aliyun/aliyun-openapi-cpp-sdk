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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTADDONSRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTADDONSRESULT_H_

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
			class ALIBABACLOUD_ARMS_EXPORT ListAddonsResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct DashboardsItem
					{
						std::string description;
						std::string url;
						std::string name;
					};
					struct EnvironmentsItem
					{
						struct Dependencies
						{
							std::vector<std::string> services;
							std::vector<std::string> clusterTypes;
							std::string features;
						};
						struct Policies
						{
							struct MetricCheckRule
							{
								std::vector<std::string> promQL;
							};
							struct ProtocolsItem
							{
								std::string description;
								std::string label;
								std::string icon;
								std::string name;
							};
							std::string alertDefaultStatus;
							std::vector<ProtocolsItem> protocols;
							bool defaultInstall;
							bool needRestartAfterIntegration;
							std::string targetAddonName;
							MetricCheckRule metricCheckRule;
							bool enableServiceAccount;
						};
						Policies policies;
						std::string description;
						std::string label;
						bool enable;
						Dependencies dependencies;
						std::string name;
					};
					std::string description;
					std::vector<std::string> keywords;
					bool once;
					std::vector<std::string> categories;
					std::string scene;
					std::string weight;
					std::string name;
					std::vector<DataItem::EnvironmentsItem> environments;
					std::string language;
					std::string version;
					std::string alias;
					std::vector<DataItem::DashboardsItem> dashboards;
					std::string icon;
					std::string latestReleaseCreateTime;
				};


				ListAddonsResult();
				explicit ListAddonsResult(const std::string &payload);
				~ListAddonsResult();
				std::string getMessage()const;
				std::vector<DataItem> getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<DataItem> data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTADDONSRESULT_H_