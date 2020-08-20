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

#ifndef ALIBABACLOUD_VCS_MODEL_LISTPERSONVISITCOUNTRESULT_H_
#define ALIBABACLOUD_VCS_MODEL_LISTPERSONVISITCOUNTRESULT_H_

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
			class ALIBABACLOUD_VCS_EXPORT ListPersonVisitCountResult : public ServiceResult
			{
			public:
				struct Datas
				{
					std::string corpId;
					std::string personId;
					std::string deviceId;
					std::string tagMetrics;
					std::string tagCode;
					std::string dayId;
					std::string groupId;
					std::string hourId;
				};


				ListPersonVisitCountResult();
				explicit ListPersonVisitCountResult(const std::string &payload);
				~ListPersonVisitCountResult();
				std::string getTotalCount()const;
				std::string getMessage()const;
				std::string getPageSize()const;
				std::vector<Datas> getData()const;
				std::string getPageNo()const;
				std::string getCode()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::string message_;
				std::string pageSize_;
				std::vector<Datas> data_;
				std::string pageNo_;
				std::string code_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_LISTPERSONVISITCOUNTRESULT_H_