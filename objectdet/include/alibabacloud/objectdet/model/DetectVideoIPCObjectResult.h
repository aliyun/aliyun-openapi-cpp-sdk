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

#ifndef ALIBABACLOUD_OBJECTDET_MODEL_DETECTVIDEOIPCOBJECTRESULT_H_
#define ALIBABACLOUD_OBJECTDET_MODEL_DETECTVIDEOIPCOBJECTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/objectdet/ObjectdetExport.h>

namespace AlibabaCloud
{
	namespace Objectdet
	{
		namespace Model
		{
			class ALIBABACLOUD_OBJECTDET_EXPORT DetectVideoIPCObjectResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Frame
					{
						struct ElementsItem
						{
							std::string type;
							float score;
							long x;
							long y;
							long height;
							long width;
						};
						long time;
						std::vector<Frame::ElementsItem> elements;
					};
					std::vector<Frame> frames;
					long height;
					long width;
					std::string inputFile;
				};


				DetectVideoIPCObjectResult();
				explicit DetectVideoIPCObjectResult(const std::string &payload);
				~DetectVideoIPCObjectResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OBJECTDET_MODEL_DETECTVIDEOIPCOBJECTRESULT_H_