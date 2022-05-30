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

#ifndef ALIBABACLOUD_QUALITYCHECK_MODEL_LISTBUSINESSSPACESRESULT_H_
#define ALIBABACLOUD_QUALITYCHECK_MODEL_LISTBUSINESSSPACESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/qualitycheck/QualitycheckExport.h>

namespace AlibabaCloud
{
	namespace Qualitycheck
	{
		namespace Model
		{
			class ALIBABACLOUD_QUALITYCHECK_EXPORT ListBusinessSpacesResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string xspaceProductCode;
					std::string xspaceCommodityCode;
					std::string endTime;
					int currentStatus;
					std::string productType;
					std::string startTime;
					std::string roleName;
					std::string language;
					std::string orderInstanceId;
					long subAliUid;
					std::string businessSpaceCode;
					long id;
					int loginUserType;
					std::string businessSpaceName;
					long aliUid;
				};


				ListBusinessSpacesResult();
				explicit ListBusinessSpacesResult(const std::string &payload);
				~ListBusinessSpacesResult();
				int getPageSize()const;
				std::string getMessage()const;
				int getCurrentPage()const;
				int getPageNumber()const;
				std::vector<DataItem> getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				std::string message_;
				int currentPage_;
				int pageNumber_;
				std::vector<DataItem> data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUALITYCHECK_MODEL_LISTBUSINESSSPACESRESULT_H_