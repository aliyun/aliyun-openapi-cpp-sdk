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

#ifndef ALIBABACLOUD_VCS_MODEL_LISTPERSONTRACEDETAILSRESULT_H_
#define ALIBABACLOUD_VCS_MODEL_LISTPERSONTRACEDETAILSRESULT_H_

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
			class ALIBABACLOUD_VCS_EXPORT ListPersonTraceDetailsResult : public ServiceResult
			{
			public:
				struct Datas
				{
					std::string picUrlPath;
					std::string corpId;
					long pageSize;
					std::string rightBottomX;
					std::string targetPicUrlPath;
					std::string rightBottomY;
					std::string leftTopY;
					std::string leftTopX;
					long totalCount;
					std::string subId;
					long totalPage;
					std::string personId;
					long pageNumber;
					std::string shotTime;
					std::string isvId;
					std::string dataSourceId;
				};


				ListPersonTraceDetailsResult();
				explicit ListPersonTraceDetailsResult(const std::string &payload);
				~ListPersonTraceDetailsResult();
				std::string getMessage()const;
				std::vector<Datas> getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<Datas> data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_LISTPERSONTRACEDETAILSRESULT_H_