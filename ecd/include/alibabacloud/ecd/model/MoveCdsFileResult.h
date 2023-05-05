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

#ifndef ALIBABACLOUD_ECD_MODEL_MOVECDSFILERESULT_H_
#define ALIBABACLOUD_ECD_MODEL_MOVECDSFILERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT MoveCdsFileResult : public ServiceResult
			{
			public:
				struct MoveCdsFileModel
				{
					bool exist;
					std::string asyncTaskId;
					std::string fileId;
				};


				MoveCdsFileResult();
				explicit MoveCdsFileResult(const std::string &payload);
				~MoveCdsFileResult();
				MoveCdsFileModel getMoveCdsFileModel()const;
				std::string getMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				MoveCdsFileModel moveCdsFileModel_;
				std::string message_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_MOVECDSFILERESULT_H_