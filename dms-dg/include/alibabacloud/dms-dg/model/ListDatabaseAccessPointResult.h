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

#ifndef ALIBABACLOUD_DMS_DG_MODEL_LISTDATABASEACCESSPOINTRESULT_H_
#define ALIBABACLOUD_DMS_DG_MODEL_LISTDATABASEACCESSPOINTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dms-dg/Dms_dgExport.h>

namespace AlibabaCloud
{
	namespace Dms_dg
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_DG_EXPORT ListDatabaseAccessPointResult : public ServiceResult
			{
			public:
				struct DbInstanceAccessPoint
				{
					std::string accessAddr;
					long gmtCreate;
					std::string vpcId;
					long gmtModified;
					std::string routerId;
					int accessPort;
					std::string vpcAzoneId;
					std::string dbInstanceId;
					std::string vswitchId;
				};


				ListDatabaseAccessPointResult();
				explicit ListDatabaseAccessPointResult(const std::string &payload);
				~ListDatabaseAccessPointResult();
				std::vector<DbInstanceAccessPoint> getDbInstanceAccessPointList()const;
				std::string getErrorMsg()const;
				int getCount()const;
				std::string getCode()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DbInstanceAccessPoint> dbInstanceAccessPointList_;
				std::string errorMsg_;
				int count_;
				std::string code_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_DG_MODEL_LISTDATABASEACCESSPOINTRESULT_H_