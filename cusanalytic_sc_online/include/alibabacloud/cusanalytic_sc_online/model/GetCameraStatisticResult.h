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

#ifndef ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETCAMERASTATISTICRESULT_H_
#define ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETCAMERASTATISTICRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cusanalytic_sc_online/Cusanalytic_sc_onlineExport.h>

namespace AlibabaCloud
{
	namespace Cusanalytic_sc_online
	{
		namespace Model
		{
			class ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_EXPORT GetCameraStatisticResult : public ServiceResult
			{
			public:
				struct PvStatisticResult
				{
					struct Rect
					{
						float left;
						float top;
						float right;
						float bottom;
					};
					std::vector<PvStatisticResult::Rect> pvRects;
					long locationId;
					long processCursor;
					long pvCount;
					long ipcId;
				};


				GetCameraStatisticResult();
				explicit GetCameraStatisticResult(const std::string &payload);
				~GetCameraStatisticResult();
				std::vector<PvStatisticResult> getPvStatisticResults()const;
				std::string getErrorMsg()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<PvStatisticResult> pvStatisticResults_;
				std::string errorMsg_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETCAMERASTATISTICRESULT_H_