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

#ifndef ALIBABACLOUD_GPDB_MODEL_MODIFYDBINSTANCEDESCRIPTIONREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_MODIFYDBINSTANCEDESCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT ModifyDBInstanceDescriptionRequest : public RpcServiceRequest
			{

			public:
				ModifyDBInstanceDescriptionRequest();
				~ModifyDBInstanceDescriptionRequest();

				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getDBInstanceDescription()const;
				void setDBInstanceDescription(const std::string& dBInstanceDescription);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string dBInstanceId_;
				std::string dBInstanceDescription_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_MODIFYDBINSTANCEDESCRIPTIONREQUEST_H_