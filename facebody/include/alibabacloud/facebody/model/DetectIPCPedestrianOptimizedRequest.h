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

#ifndef ALIBABACLOUD_FACEBODY_MODEL_DETECTIPCPEDESTRIANOPTIMIZEDREQUEST_H_
#define ALIBABACLOUD_FACEBODY_MODEL_DETECTIPCPEDESTRIANOPTIMIZEDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/facebody/FacebodyExport.h>

namespace AlibabaCloud
{
	namespace Facebody
	{
		namespace Model
		{
			class ALIBABACLOUD_FACEBODY_EXPORT DetectIPCPedestrianOptimizedRequest : public RoaServiceRequest
			{

			public:
				DetectIPCPedestrianOptimizedRequest();
				~DetectIPCPedestrianOptimizedRequest();

				std::string getImageData()const;
				void setImageData(const std::string& imageData);
				long getWidth()const;
				void setWidth(long width);
				long getHeight()const;
				void setHeight(long height);

            private:
				std::string imageData_;
				long width_;
				long height_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FACEBODY_MODEL_DETECTIPCPEDESTRIANOPTIMIZEDREQUEST_H_