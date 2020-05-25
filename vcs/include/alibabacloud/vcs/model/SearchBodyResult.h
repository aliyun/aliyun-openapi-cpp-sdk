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

#ifndef ALIBABACLOUD_VCS_MODEL_SEARCHBODYRESULT_H_
#define ALIBABACLOUD_VCS_MODEL_SEARCHBODYRESULT_H_

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
			class ALIBABACLOUD_VCS_EXPORT SearchBodyResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Record
					{
						std::string targetImageUrl;
						float score;
						float rightBottomX;
						float rightBottomY;
						std::string gbId;
						std::string imageUrl;
						float leftTopY;
						float leftTopX;
					};
					int totalCount;
					int pageSize;
					int totalPage;
					int pageNo;
					std::vector<Record> records;
				};


				SearchBodyResult();
				explicit SearchBodyResult(const std::string &payload);
				~SearchBodyResult();
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
#endif // !ALIBABACLOUD_VCS_MODEL_SEARCHBODYRESULT_H_