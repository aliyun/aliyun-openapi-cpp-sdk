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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSDBSRESULT_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSDBSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT DescribeDrdsDBsResult : public ServiceResult
			{
			public:
				struct Db
				{
					std::string status;
					std::string dbInstType;
					std::string schema;
					std::string createTime;
					std::string mode;
					std::string dbName;
				};


				DescribeDrdsDBsResult();
				explicit DescribeDrdsDBsResult(const std::string &payload);
				~DescribeDrdsDBsResult();
				std::string getPageSize()const;
				std::string getPageNumber()const;
				std::string getTotal()const;
				std::vector<Db> getData()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string pageSize_;
				std::string pageNumber_;
				std::string total_;
				std::vector<Db> data_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSDBSRESULT_H_