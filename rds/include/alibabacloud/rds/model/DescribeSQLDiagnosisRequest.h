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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBESQLDIAGNOSISREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBESQLDIAGNOSISREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/rds/RdsRequest.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeSQLDiagnosisRequest : public RdsRequest
			{

			public:
				DescribeSQLDiagnosisRequest();
				~DescribeSQLDiagnosisRequest();

				std::string getSQLDiagId()const;
				void setSQLDiagId(const std::string& sQLDiagId);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string sQLDiagId_;
				std::string dBInstanceId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBESQLDIAGNOSISREQUEST_H_