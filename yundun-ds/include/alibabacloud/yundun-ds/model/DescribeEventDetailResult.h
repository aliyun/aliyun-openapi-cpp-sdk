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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEEVENTDETAILRESULT_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEEVENTDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/yundun-ds/Yundun_dsExport.h>

namespace AlibabaCloud
{
	namespace Yundun_ds
	{
		namespace Model
		{
			class ALIBABACLOUD_YUNDUN_DS_EXPORT DescribeEventDetailResult : public ServiceResult
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
								std::string x;
								std::string y;
							};
							std::string yLabel;
							std::string label;
							Data data;
							std::string xLabel;
						};
						std::vector<ContentItem> content;
						std::vector<ChartItem> chart;
					};
					int status;
					std::string loginName;
					std::string typeName;
					std::string dataInstance;
					bool backed;
					std::string productCode;
					std::string typeCode;
					std::string statusName;
					std::string subTypeCode;
					long alertTime;
					std::string departName;
					std::string dealReason;
					std::string telephoneNum;
					std::string dealLoginName;
					std::string dealDisplayName;
					std::string subTypeName;
					long userId;
					long eventTime;
					long dealUserId;
					std::string displayName;
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
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEEVENTDETAILRESULT_H_