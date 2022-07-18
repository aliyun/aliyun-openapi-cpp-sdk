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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_BINDESLDEVICEREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_BINDESLDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT BindEslDeviceRequest : public RpcServiceRequest
			{

			public:
				BindEslDeviceRequest();
				~BindEslDeviceRequest();

				std::string getExtraParams()const;
				void setExtraParams(const std::string& extraParams);
				std::string getContainerName()const;
				void setContainerName(const std::string& containerName);
				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				std::string getLayoutId()const;
				void setLayoutId(const std::string& layoutId);
				int getLayer()const;
				void setLayer(int layer);
				std::string getEslBarCode()const;
				void setEslBarCode(const std::string& eslBarCode);
				std::string getLayoutName()const;
				void setLayoutName(const std::string& layoutName);
				std::string getItemBarCode()const;
				void setItemBarCode(const std::string& itemBarCode);
				std::string getColumn()const;
				void setColumn(const std::string& column);
				std::string getShelf()const;
				void setShelf(const std::string& shelf);
				std::string getContainerId()const;
				void setContainerId(const std::string& containerId);

            private:
				std::string extraParams_;
				std::string containerName_;
				std::string storeId_;
				std::string layoutId_;
				int layer_;
				std::string eslBarCode_;
				std::string layoutName_;
				std::string itemBarCode_;
				std::string column_;
				std::string shelf_;
				std::string containerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_BINDESLDEVICEREQUEST_H_