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

#ifndef ALIBABACLOUD_FACEBODY_MODEL_DETECTIPCPEDESTRIANREQUEST_H_
#define ALIBABACLOUD_FACEBODY_MODEL_DETECTIPCPEDESTRIANREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/facebody/FacebodyExport.h>

namespace AlibabaCloud
{
	namespace Facebody
	{
		namespace Model
		{
			class ALIBABACLOUD_FACEBODY_EXPORT DetectIPCPedestrianRequest : public RpcServiceRequest
			{

			public:
				DetectIPCPedestrianRequest();
				~DetectIPCPedestrianRequest();

				bool getContinueOnError()const;
				void setContinueOnError(bool continueOnError);
				int getHeight()const;
				void setHeight(int height);
				std::string getImageData()const;
				void setImageData(const std::string& imageData);
				std::string getDataId()const;
				void setDataId(const std::string& dataId);
				std::string getImageURL()const;
				void setImageURL(const std::string& imageURL);
				int getWidth()const;
				void setWidth(int width);

            private:
				bool continueOnError_;
				int height_;
				std::string imageData_;
				std::string dataId_;
				std::string imageURL_;
				int width_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FACEBODY_MODEL_DETECTIPCPEDESTRIANREQUEST_H_