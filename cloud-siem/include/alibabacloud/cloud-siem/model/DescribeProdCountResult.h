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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEPRODCOUNTRESULT_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEPRODCOUNTRESULT_H_

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
			class ALIBABACLOUD_CLOUD_SIEM_EXPORT DescribeProdCountResult : public ServiceResult
			{
			public:
				struct Data
				{
					int aliyunProdCount;
					int aliyunImportedCount;
					int hcloudImportedCount;
					int hcloudProdCount;
					int idcProdCount;
					int qcloudImportedCount;
					int idcImportedCount;
					int qcloudProdCount;
				};


				DescribeProdCountResult();
				explicit DescribeProdCountResult(const std::string &payload);
				~DescribeProdCountResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEPRODCOUNTRESULT_H_