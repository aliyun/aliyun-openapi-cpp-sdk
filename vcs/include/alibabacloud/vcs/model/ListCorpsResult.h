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

#ifndef ALIBABACLOUD_VCS_MODEL_LISTCORPSRESULT_H_
#define ALIBABACLOUD_VCS_MODEL_LISTCORPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT ListCorpsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Record
					{
						std::string corpId;
						std::string description;
						std::string parentCorpId;
						std::string createDate;
						std::string corpName;
						std::string appName;
						int deviceCount;
					};
					int totalCount;
					int pageSize;
					int totalPage;
					int pageNumber;
					std::vector<Record> records;
				};


				ListCorpsResult();
				explicit ListCorpsResult(const std::string &payload);
				~ListCorpsResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_LISTCORPSRESULT_H_