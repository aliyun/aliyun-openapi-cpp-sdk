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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEDATASOURCEPARAMETERSRESULT_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEDATASOURCEPARAMETERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloud-siem/Cloud_siemExport.h>

namespace AlibabaCloud
{
	namespace Cloud_siem
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUD_SIEM_EXPORT DescribeDataSourceParametersResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct ParamValueItem
					{
						std::string label;
						std::string value;
					};
					int canEditted;
					std::string cloudCode;
					std::vector<DataItem::ParamValueItem> paramValue;
					std::string title;
					std::string defaultValue;
					std::string hit;
					std::string paraCode;
					int required;
					std::string paraName;
					std::string dataSourceType;
					int paraLevel;
					std::string paraType;
					std::string formatCheck;
					bool disabled;
				};


				DescribeDataSourceParametersResult();
				explicit DescribeDataSourceParametersResult(const std::string &payload);
				~DescribeDataSourceParametersResult();
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEDATASOURCEPARAMETERSRESULT_H_