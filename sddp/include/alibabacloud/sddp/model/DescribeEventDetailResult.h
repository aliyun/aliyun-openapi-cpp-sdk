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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEEVENTDETAILRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEEVENTDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeEventDetailResult : public ServiceResult
			{
			public:
				struct Event
				{
					struct Detail
					{
						struct ContentItem
						{
							std::string label;
							std::string value;
						};
						struct ChartItem
						{
							struct Data
							{
								std::vector<std::string> x;
								std::vector<std::string> y;
							};
							std::string yLabel;
							std::string type;
							std::string label;
							Data data;
							std::string xLabel;
						};
						struct ResourceInfoItem
						{
							std::string label;
							std::string value;
						};
						std::vector<ResourceInfoItem> resourceInfo;
						std::vector<ContentItem> content;
						std::vector<ChartItem> chart;
					};
					struct HandleInfo
					{
						int status;
						long disableTime;
						std::string handlerType;
						int handlerValue;
						std::string currentValue;
						long enableTime;
						long id;
						std::string handlerName;
					};
					std::string loginName;
					std::string dataInstance;
					std::string typeName;
					bool backed;
					std::string userIdValue;
					std::vector<HandleInfo> handleInfoList;
					std::string dealLoginName;
					std::string subTypeName;
					std::string dealUserIdValue;
					std::string displayName;
					int status;
					std::string typeCode;
					std::string productCode;
					std::string statusName;
					std::string subTypeCode;
					std::string departName;
					long alertTime;
					std::string dealReason;
					std::string logDetail;
					std::string dealDisplayName;
					long userId;
					long eventTime;
					long dealUserId;
					long id;
					long dealTime;
					Detail detail;
				};


				DescribeEventDetailResult();
				explicit DescribeEventDetailResult(const std::string &payload);
				~DescribeEventDetailResult();
				Event getEvent()const;

			protected:
				void parse(const std::string &payload);
			private:
				Event event_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEEVENTDETAILRESULT_H_