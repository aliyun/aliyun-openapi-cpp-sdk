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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICMETALISTRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICMETALISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT DescribeMetricMetaListResult : public ServiceResult
			{
			public:
				struct Resource
				{
					std::string metricName;
					std::string periods;
					std::string description;
					std::string dimensions;
					std::string labels;
					std::string _namespace;
					std::string unit;
					std::string statistics;
				};


				DescribeMetricMetaListResult();
				explicit DescribeMetricMetaListResult(const std::string &payload);
				~DescribeMetricMetaListResult();
				std::string getTotalCount()const;
				std::string getMessage()const;
				std::vector<Resource> getResources()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::string message_;
				std::vector<Resource> resources_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICMETALISTRESULT_H_