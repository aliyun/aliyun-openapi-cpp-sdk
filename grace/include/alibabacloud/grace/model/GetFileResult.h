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

#ifndef ALIBABACLOUD_GRACE_MODEL_GETFILERESULT_H_
#define ALIBABACLOUD_GRACE_MODEL_GETFILERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/grace/GraceExport.h>

namespace AlibabaCloud
{
	namespace Grace
	{
		namespace Model
		{
			class ALIBABACLOUD_GRACE_EXPORT GetFileResult : public ServiceResult
			{
			public:
				struct AnalyzeProgress
				{
					std::string message;
					double percent;
					std::string state;
				};
				struct TransferProgress
				{
					long totalSize;
					long transferredSize;
				};


				GetFileResult();
				explicit GetFileResult(const std::string &payload);
				~GetFileResult();
				std::string getType()const;
				std::string getRequestId()const;
				long getSize()const;
				AnalyzeProgress getAnalyzeProgress()const;
				long getCreationTime()const;
				std::string getDisplayName()const;
				std::string getLabels()const;
				bool getShared()const;
				std::string getTransferState()const;
				TransferProgress getTransferProgress()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string type_;
				std::string requestId_;
				long size_;
				AnalyzeProgress analyzeProgress_;
				long creationTime_;
				std::string displayName_;
				std::string labels_;
				bool shared_;
				std::string transferState_;
				TransferProgress transferProgress_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GRACE_MODEL_GETFILERESULT_H_