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

#ifndef ALIBABACLOUD_MOPEN_MOPENCLIENT_H_
#define ALIBABACLOUD_MOPEN_MOPENCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "MoPenExport.h"
#include "model/MoPenAddGroupMemberRequest.h"
#include "model/MoPenAddGroupMemberResult.h"
#include "model/MoPenBindIsvRequest.h"
#include "model/MoPenBindIsvResult.h"
#include "model/MoPenCreateDeviceRequest.h"
#include "model/MoPenCreateDeviceResult.h"
#include "model/MoPenDeleteGroupRequest.h"
#include "model/MoPenDeleteGroupResult.h"
#include "model/MoPenDeleteGroupMemberRequest.h"
#include "model/MoPenDeleteGroupMemberResult.h"
#include "model/MoPenDoRecognizeRequest.h"
#include "model/MoPenDoRecognizeResult.h"
#include "model/MoPenFindGroupRequest.h"
#include "model/MoPenFindGroupResult.h"
#include "model/MoPenQueryCanvasRequest.h"
#include "model/MoPenQueryCanvasResult.h"
#include "model/MoPenSendMqttMessageRequest.h"
#include "model/MoPenSendMqttMessageResult.h"
#include "model/MopenCreateGroupRequest.h"
#include "model/MopenCreateGroupResult.h"


namespace AlibabaCloud
{
	namespace MoPen
	{
		class ALIBABACLOUD_MOPEN_EXPORT MoPenClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::MoPenAddGroupMemberResult> MoPenAddGroupMemberOutcome;
			typedef std::future<MoPenAddGroupMemberOutcome> MoPenAddGroupMemberOutcomeCallable;
			typedef std::function<void(const MoPenClient*, const Model::MoPenAddGroupMemberRequest&, const MoPenAddGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoPenAddGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::MoPenBindIsvResult> MoPenBindIsvOutcome;
			typedef std::future<MoPenBindIsvOutcome> MoPenBindIsvOutcomeCallable;
			typedef std::function<void(const MoPenClient*, const Model::MoPenBindIsvRequest&, const MoPenBindIsvOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoPenBindIsvAsyncHandler;
			typedef Outcome<Error, Model::MoPenCreateDeviceResult> MoPenCreateDeviceOutcome;
			typedef std::future<MoPenCreateDeviceOutcome> MoPenCreateDeviceOutcomeCallable;
			typedef std::function<void(const MoPenClient*, const Model::MoPenCreateDeviceRequest&, const MoPenCreateDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoPenCreateDeviceAsyncHandler;
			typedef Outcome<Error, Model::MoPenDeleteGroupResult> MoPenDeleteGroupOutcome;
			typedef std::future<MoPenDeleteGroupOutcome> MoPenDeleteGroupOutcomeCallable;
			typedef std::function<void(const MoPenClient*, const Model::MoPenDeleteGroupRequest&, const MoPenDeleteGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoPenDeleteGroupAsyncHandler;
			typedef Outcome<Error, Model::MoPenDeleteGroupMemberResult> MoPenDeleteGroupMemberOutcome;
			typedef std::future<MoPenDeleteGroupMemberOutcome> MoPenDeleteGroupMemberOutcomeCallable;
			typedef std::function<void(const MoPenClient*, const Model::MoPenDeleteGroupMemberRequest&, const MoPenDeleteGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoPenDeleteGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::MoPenDoRecognizeResult> MoPenDoRecognizeOutcome;
			typedef std::future<MoPenDoRecognizeOutcome> MoPenDoRecognizeOutcomeCallable;
			typedef std::function<void(const MoPenClient*, const Model::MoPenDoRecognizeRequest&, const MoPenDoRecognizeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoPenDoRecognizeAsyncHandler;
			typedef Outcome<Error, Model::MoPenFindGroupResult> MoPenFindGroupOutcome;
			typedef std::future<MoPenFindGroupOutcome> MoPenFindGroupOutcomeCallable;
			typedef std::function<void(const MoPenClient*, const Model::MoPenFindGroupRequest&, const MoPenFindGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoPenFindGroupAsyncHandler;
			typedef Outcome<Error, Model::MoPenQueryCanvasResult> MoPenQueryCanvasOutcome;
			typedef std::future<MoPenQueryCanvasOutcome> MoPenQueryCanvasOutcomeCallable;
			typedef std::function<void(const MoPenClient*, const Model::MoPenQueryCanvasRequest&, const MoPenQueryCanvasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoPenQueryCanvasAsyncHandler;
			typedef Outcome<Error, Model::MoPenSendMqttMessageResult> MoPenSendMqttMessageOutcome;
			typedef std::future<MoPenSendMqttMessageOutcome> MoPenSendMqttMessageOutcomeCallable;
			typedef std::function<void(const MoPenClient*, const Model::MoPenSendMqttMessageRequest&, const MoPenSendMqttMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoPenSendMqttMessageAsyncHandler;
			typedef Outcome<Error, Model::MopenCreateGroupResult> MopenCreateGroupOutcome;
			typedef std::future<MopenCreateGroupOutcome> MopenCreateGroupOutcomeCallable;
			typedef std::function<void(const MoPenClient*, const Model::MopenCreateGroupRequest&, const MopenCreateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MopenCreateGroupAsyncHandler;

			MoPenClient(const Credentials &credentials, const ClientConfiguration &configuration);
			MoPenClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			MoPenClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~MoPenClient();
			MoPenAddGroupMemberOutcome moPenAddGroupMember(const Model::MoPenAddGroupMemberRequest &request)const;
			void moPenAddGroupMemberAsync(const Model::MoPenAddGroupMemberRequest& request, const MoPenAddGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoPenAddGroupMemberOutcomeCallable moPenAddGroupMemberCallable(const Model::MoPenAddGroupMemberRequest& request) const;
			MoPenBindIsvOutcome moPenBindIsv(const Model::MoPenBindIsvRequest &request)const;
			void moPenBindIsvAsync(const Model::MoPenBindIsvRequest& request, const MoPenBindIsvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoPenBindIsvOutcomeCallable moPenBindIsvCallable(const Model::MoPenBindIsvRequest& request) const;
			MoPenCreateDeviceOutcome moPenCreateDevice(const Model::MoPenCreateDeviceRequest &request)const;
			void moPenCreateDeviceAsync(const Model::MoPenCreateDeviceRequest& request, const MoPenCreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoPenCreateDeviceOutcomeCallable moPenCreateDeviceCallable(const Model::MoPenCreateDeviceRequest& request) const;
			MoPenDeleteGroupOutcome moPenDeleteGroup(const Model::MoPenDeleteGroupRequest &request)const;
			void moPenDeleteGroupAsync(const Model::MoPenDeleteGroupRequest& request, const MoPenDeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoPenDeleteGroupOutcomeCallable moPenDeleteGroupCallable(const Model::MoPenDeleteGroupRequest& request) const;
			MoPenDeleteGroupMemberOutcome moPenDeleteGroupMember(const Model::MoPenDeleteGroupMemberRequest &request)const;
			void moPenDeleteGroupMemberAsync(const Model::MoPenDeleteGroupMemberRequest& request, const MoPenDeleteGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoPenDeleteGroupMemberOutcomeCallable moPenDeleteGroupMemberCallable(const Model::MoPenDeleteGroupMemberRequest& request) const;
			MoPenDoRecognizeOutcome moPenDoRecognize(const Model::MoPenDoRecognizeRequest &request)const;
			void moPenDoRecognizeAsync(const Model::MoPenDoRecognizeRequest& request, const MoPenDoRecognizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoPenDoRecognizeOutcomeCallable moPenDoRecognizeCallable(const Model::MoPenDoRecognizeRequest& request) const;
			MoPenFindGroupOutcome moPenFindGroup(const Model::MoPenFindGroupRequest &request)const;
			void moPenFindGroupAsync(const Model::MoPenFindGroupRequest& request, const MoPenFindGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoPenFindGroupOutcomeCallable moPenFindGroupCallable(const Model::MoPenFindGroupRequest& request) const;
			MoPenQueryCanvasOutcome moPenQueryCanvas(const Model::MoPenQueryCanvasRequest &request)const;
			void moPenQueryCanvasAsync(const Model::MoPenQueryCanvasRequest& request, const MoPenQueryCanvasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoPenQueryCanvasOutcomeCallable moPenQueryCanvasCallable(const Model::MoPenQueryCanvasRequest& request) const;
			MoPenSendMqttMessageOutcome moPenSendMqttMessage(const Model::MoPenSendMqttMessageRequest &request)const;
			void moPenSendMqttMessageAsync(const Model::MoPenSendMqttMessageRequest& request, const MoPenSendMqttMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoPenSendMqttMessageOutcomeCallable moPenSendMqttMessageCallable(const Model::MoPenSendMqttMessageRequest& request) const;
			MopenCreateGroupOutcome mopenCreateGroup(const Model::MopenCreateGroupRequest &request)const;
			void mopenCreateGroupAsync(const Model::MopenCreateGroupRequest& request, const MopenCreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MopenCreateGroupOutcomeCallable mopenCreateGroupCallable(const Model::MopenCreateGroupRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_MOPEN_MOPENCLIENT_H_
