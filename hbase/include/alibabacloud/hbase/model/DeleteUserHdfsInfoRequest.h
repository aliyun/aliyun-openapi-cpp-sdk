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

#ifndef ALIBABACLOUD_HBASE_MODEL_DELETEUSERHDFSINFOREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_DELETEUSERHDFSINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT DeleteUserHdfsInfoRequest : public RpcServiceRequest
			{

			public:
				DeleteUserHdfsInfoRequest();
				~DeleteUserHdfsInfoRequest();

				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getNameService()const;
				void setNameService(const std::string& nameService);

            private:
				std::string clusterId_;
				std::string nameService_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DELETEUSERHDFSINFOREQUEST_H_