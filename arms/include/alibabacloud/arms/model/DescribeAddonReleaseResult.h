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

#ifndef ALIBABACLOUD_ARMS_MODEL_DESCRIBEADDONRELEASERESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_DESCRIBEADDONRELEASERESULT_H_

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
			class ALIBABACLOUD_ARMS_EXPORT DescribeAddonReleaseResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Release
					{
						struct ConditionsItem
						{
							std::string lastTransitionTime;
							std::string status;
							std::string type;
							std::string message;
							std::string reason;
							std::string firstTransitionTime;
						};
						std::string status;
						std::string createTime;
						long alertRuleCount;
						std::string addonName;
						std::string releaseId;
						std::string releaseName;
						std::string scene;
						std::vector<ConditionsItem> conditions;
						long exporterCount;
						bool haveConfig;
						std::string installUserId;
						std::string environmentId;
						long dashboardCount;
						std::string language;
						std::string version;
						std::string userID;
						std::string updateTime;
						std::string regionId;
						bool managed;
					};
					std::string config;
					Release release;
				};


				DescribeAddonReleaseResult();
				explicit DescribeAddonReleaseResult(const std::string &payload);
				~DescribeAddonReleaseResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_DESCRIBEADDONRELEASERESULT_H_