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

#ifndef ALIBABACLOUD_DBFS_MODEL_INSERTSYNCHRONIZCONSTANTSREQUEST_H_
#define ALIBABACLOUD_DBFS_MODEL_INSERTSYNCHRONIZCONSTANTSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dbfs/DBFSExport.h>

namespace AlibabaCloud
{
	namespace DBFS
	{
		namespace Model
		{
			class ALIBABACLOUD_DBFS_EXPORT InsertSynchronizConstantsRequest : public RpcServiceRequest
			{

			public:
				InsertSynchronizConstantsRequest();
				~InsertSynchronizConstantsRequest();

				std::string getZoneData()const;
				void setZoneData(const std::string& zoneData);
				std::string getOsversionData()const;
				void setOsversionData(const std::string& osversionData);
				std::string getEndpointData()const;
				void setEndpointData(const std::string& endpointData);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getMasterData()const;
				void setMasterData(const std::string& masterData);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getProductCodeData()const;
				void setProductCodeData(const std::string& productCodeData);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getAccessData()const;
				void setAccessData(const std::string& accessData);
				std::string getRegionData()const;
				void setRegionData(const std::string& regionData);

            private:
				std::string zoneData_;
				std::string osversionData_;
				std::string endpointData_;
				int pageNumber_;
				std::string masterData_;
				std::string regionId_;
				std::string productCodeData_;
				int pageSize_;
				std::string accessData_;
				std::string regionData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBFS_MODEL_INSERTSYNCHRONIZCONSTANTSREQUEST_H_