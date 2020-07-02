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

#ifndef ALIBABACLOUD_REID_MODEL_GETFOOTWEARPOSITIONRESULT_H_
#define ALIBABACLOUD_REID_MODEL_GETFOOTWEARPOSITIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/reid/ReidExport.h>

namespace AlibabaCloud
{
	namespace Reid
	{
		namespace Model
		{
			class ALIBABACLOUD_REID_EXPORT GetFootwearPositionResult : public ServiceResult
			{
			public:


				GetFootwearPositionResult();
				explicit GetFootwearPositionResult(const std::string &payload);
				~GetFootwearPositionResult();
				std::string getMessage()const;
				long getStoreId()const;
				long getStartTime()const;
				std::string getDynamicCode()const;
				std::string getErrorCode()const;
				std::string getDynamicMessage()const;
				std::string getErrorMessage()const;
				std::string getSkuId()const;
				std::string getCode()const;
				int getPositionNumber()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				long storeId_;
				long startTime_;
				std::string dynamicCode_;
				std::string errorCode_;
				std::string dynamicMessage_;
				std::string errorMessage_;
				std::string skuId_;
				std::string code_;
				int positionNumber_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_REID_MODEL_GETFOOTWEARPOSITIONRESULT_H_