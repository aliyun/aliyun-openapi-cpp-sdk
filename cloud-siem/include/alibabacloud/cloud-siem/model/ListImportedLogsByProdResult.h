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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTIMPORTEDLOGSBYPRODRESULT_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTIMPORTEDLOGSBYPRODRESULT_H_

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
			class ALIBABACLOUD_CLOUD_SIEM_EXPORT ListImportedLogsByProdResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string modifyTime;
					std::string cloudCode;
					int autoImported;
					int logType;
					int importedUserCount;
					int imported;
					int totalUserCount;
					std::string prodCode;
					int unImportedUserCount;
					std::string logCode;
					std::string logMdsCode;
				};


				ListImportedLogsByProdResult();
				explicit ListImportedLogsByProdResult(const std::string &payload);
				~ListImportedLogsByProdResult();
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTIMPORTEDLOGSBYPRODRESULT_H_