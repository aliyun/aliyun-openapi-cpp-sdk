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

#ifndef ALIBABACLOUD_ITAG_MODEL_GETMARKUSERSUMMARYRESULT_H_
#define ALIBABACLOUD_ITAG_MODEL_GETMARKUSERSUMMARYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/itag/ItagExport.h>

namespace AlibabaCloud
{
	namespace Itag
	{
		namespace Model
		{
			class ALIBABACLOUD_ITAG_EXPORT GetMarkUserSummaryResult : public ServiceResult
			{
			public:
				struct Result
				{
					std::string taskId;
					std::string bizClassify;
					int sampledReject;
					int checkReject;
					long noRejectAudio;
					float markTime;
					int noRejectMark;
					int totalMark;
					int totalSampling;
					int samplingReject;
					float sampledAccuracy;
					int totalDisable;
					float markEfficiency;
					long totalPDF;
					float checkTime;
					float checkedAccuracy;
					int samplingFix;
					int checkedReject;
					std::string userName;
					int sample;
					std::string workflow;
					long noRejectPDF;
					float checkEfficiency;
					int checkedError;
					std::string workTime;
					int totalSampled;
					float samplingAccuracy;
					int totalCheck;
					long totalAudio;
					std::string taskName;
					long totalVideo;
					std::string userId;
					int checkedFix;
					std::string updateTime;
					int samplingError;
					int checkFix;
					long noRejectVideo;
					int sampledFix;
					int totalChecked;
					int checkError;
					float checkAccuracy;
					int sampledError;
					int noRejectCheck;
				};


				GetMarkUserSummaryResult();
				explicit GetMarkUserSummaryResult(const std::string &payload);
				~GetMarkUserSummaryResult();
				std::string getMsg()const;
				std::string getRequestId()const;
				bool getSucc()const;
				std::string getErrorCode()const;
				std::string getErrInfo()const;
				int getCode()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				std::string requestId_;
				bool succ_;
				std::string errorCode_;
				std::string errInfo_;
				int code_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ITAG_MODEL_GETMARKUSERSUMMARYRESULT_H_