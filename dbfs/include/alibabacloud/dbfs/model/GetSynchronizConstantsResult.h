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

#ifndef ALIBABACLOUD_DBFS_MODEL_GETSYNCHRONIZCONSTANTSRESULT_H_
#define ALIBABACLOUD_DBFS_MODEL_GETSYNCHRONIZCONSTANTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dbfs/DBFSExport.h>

namespace AlibabaCloud
{
	namespace DBFS
	{
		namespace Model
		{
			class ALIBABACLOUD_DBFS_EXPORT GetSynchronizConstantsResult : public ServiceResult
			{
			public:


				GetSynchronizConstantsResult();
				explicit GetSynchronizConstantsResult(const std::string &payload);
				~GetSynchronizConstantsResult();
				long getTotalCount()const;
				std::string getMasterData()const;
				long getPageSize()const;
				std::string getZoneData()const;
				long getPageNumber()const;
				std::string getAccessData()const;
				std::string getProductCodeData()const;
				std::string getOsversionData()const;
				std::string getData()const;
				std::string getRegionData()const;
				std::string getEndpointData()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string masterData_;
				long pageSize_;
				std::string zoneData_;
				long pageNumber_;
				std::string accessData_;
				std::string productCodeData_;
				std::string osversionData_;
				std::string data_;
				std::string regionData_;
				std::string endpointData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBFS_MODEL_GETSYNCHRONIZCONSTANTSRESULT_H_