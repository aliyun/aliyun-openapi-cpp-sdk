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

#ifndef ALIBABACLOUD_NAS_MODEL_DESCRIBEDIRQUOTASRESULT_H_
#define ALIBABACLOUD_NAS_MODEL_DESCRIBEDIRQUOTASRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nas/NASExport.h>

namespace AlibabaCloud
{
	namespace NAS
	{
		namespace Model
		{
			class ALIBABACLOUD_NAS_EXPORT DescribeDirQuotasResult : public ServiceResult
			{
			public:
				struct DirQuotaInfo
				{
					struct UserQuotaInfo
					{
						long fileCountLimit;
						std::string userId;
						long sizeLimit;
						std::string quotaType;
						long fileCountReal;
						long sizeReal;
						std::string userType;
						long sizeRealInByte;
					};
					std::string status;
					std::string path;
					std::string dirInode;
					std::vector<DirQuotaInfo::UserQuotaInfo> userQuotaInfos;
				};


				DescribeDirQuotasResult();
				explicit DescribeDirQuotasResult(const std::string &payload);
				~DescribeDirQuotasResult();
				int getTotalCount()const;
				std::vector<DirQuotaInfo> getDirQuotaInfos()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<DirQuotaInfo> dirQuotaInfos_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NAS_MODEL_DESCRIBEDIRQUOTASRESULT_H_