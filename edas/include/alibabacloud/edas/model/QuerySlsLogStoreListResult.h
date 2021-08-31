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

#ifndef ALIBABACLOUD_EDAS_MODEL_QUERYSLSLOGSTORELISTRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_QUERYSLSLOGSTORELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT QuerySlsLogStoreListResult : public ServiceResult
			{
			public:
				struct SlsLog
				{
					std::string project;
					std::string consumerSide;
					std::string logstore;
					std::string createTime;
					std::string link;
					std::string source;
				};


				QuerySlsLogStoreListResult();
				explicit QuerySlsLogStoreListResult(const std::string &payload);
				~QuerySlsLogStoreListResult();
				std::string getMessage()const;
				int getTotalSize()const;
				int getCode()const;
				std::vector<SlsLog> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int totalSize_;
				int code_;
				std::vector<SlsLog> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_QUERYSLSLOGSTORELISTRESULT_H_