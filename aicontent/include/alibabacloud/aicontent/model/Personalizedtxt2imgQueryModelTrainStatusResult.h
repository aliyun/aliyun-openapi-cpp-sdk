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

#ifndef ALIBABACLOUD_AICONTENT_MODEL_PERSONALIZEDTXT2IMGQUERYMODELTRAINSTATUSRESULT_H_
#define ALIBABACLOUD_AICONTENT_MODEL_PERSONALIZEDTXT2IMGQUERYMODELTRAINSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aicontent/AiContentExport.h>

namespace AlibabaCloud
{
	namespace AiContent
	{
		namespace Model
		{
			class ALIBABACLOUD_AICONTENT_EXPORT Personalizedtxt2imgQueryModelTrainStatusResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string modelTrainStatus;
				};


				Personalizedtxt2imgQueryModelTrainStatusResult();
				explicit Personalizedtxt2imgQueryModelTrainStatusResult(const std::string &payload);
				~Personalizedtxt2imgQueryModelTrainStatusResult();
				std::string getRequestId()const;
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getErrMessage()const;
				bool getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				int httpStatusCode_;
				Data data_;
				std::string errMessage_;
				bool success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AICONTENT_MODEL_PERSONALIZEDTXT2IMGQUERYMODELTRAINSTATUSRESULT_H_