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

#ifndef ALIBABACLOUD_HBASE_MODEL_MODIFYINSTANCEMAINTAINTIMEREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_MODIFYINSTANCEMAINTAINTIMEREQUEST_H_

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
			class ALIBABACLOUD_HBASE_EXPORT ModifyInstanceMaintainTimeRequest : public RpcServiceRequest
			{

			public:
				ModifyInstanceMaintainTimeRequest();
				~ModifyInstanceMaintainTimeRequest();

				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getMaintainEndTime()const;
				void setMaintainEndTime(const std::string& maintainEndTime);
				std::string getMaintainStartTime()const;
				void setMaintainStartTime(const std::string& maintainStartTime);

            private:
				std::string clusterId_;
				std::string maintainEndTime_;
				std::string maintainStartTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_MODIFYINSTANCEMAINTAINTIMEREQUEST_H_